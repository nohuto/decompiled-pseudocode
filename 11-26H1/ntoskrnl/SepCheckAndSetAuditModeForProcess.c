/*
 * XREFs of SepCheckAndSetAuditModeForProcess @ 0x140A88938
 * Callers:
 *     SepIsMinTCB @ 0x14091E9C8 (SepIsMinTCB.c)
 *     SepIsImageInMinTcbList @ 0x140A88634 (SepIsImageInMinTcbList.c)
 * Callees:
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     RtlQueryImageFileKeyOption @ 0x1409665B0 (RtlQueryImageFileKeyOption.c)
 *     SeCompareSigningLevels @ 0x140A88910 (SeCompareSigningLevels.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x140AB4D48 (RtlpOpenImageFileOptionsKeyEx.c)
 */

void __fastcall SepCheckAndSetAuditModeForProcess(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  unsigned __int8 AffinityVersion; // di
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebx
  int v9; // [rsp+60h] [rbp+18h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+20h] BYREF

  AffinityVersion = SeILSigningPolicy;
  v9 = 0;
  Handle = 0LL;
  if ( !SeILSigningPolicy )
    AffinityVersion = RtlpBootStatHandleLock.AffinityVersion;
  if ( !*a3 && *a2 == AffinityVersion && (int)RtlpOpenImageFileOptionsKeyEx(a1, a2, a3, &Handle) >= 0 )
  {
    if ( RtlQueryImageFileKeyOption(Handle, L"AuditLevel", 4u, &v9, 4u, 0LL) >= 0 )
    {
      v8 = v9 & 0xF;
      if ( (unsigned int)(v8 - 2) <= 0xD && v8 != AffinityVersion )
      {
        LOBYTE(v6) = AffinityVersion;
        LOBYTE(v7) = v9 & 0xF;
        if ( (unsigned int)SeCompareSigningLevels(v7, v6) )
        {
          *a2 = v8;
          *a3 = 8;
        }
      }
    }
    ZwClose(Handle);
  }
}
