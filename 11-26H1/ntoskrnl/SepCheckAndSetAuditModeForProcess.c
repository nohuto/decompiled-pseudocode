/*
 * XREFs of SepCheckAndSetAuditModeForProcess @ 0x140B5CD50
 * Callers:
 *     SepIsMinTCB @ 0x140979428 (SepIsMinTCB.c)
 *     SepIsImageInMinTcbList @ 0x14097A150 (SepIsImageInMinTcbList.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     RtlQueryImageFileKeyOption @ 0x140A786C0 (RtlQueryImageFileKeyOption.c)
 *     SeCompareSigningLevels @ 0x140A8FB90 (SeCompareSigningLevels.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x140AB60E8 (RtlpOpenImageFileOptionsKeyEx.c)
 */

void __fastcall SepCheckAndSetAuditModeForProcess(unsigned __int16 *a1, _BYTE *a2, _BYTE *a3)
{
  unsigned __int8 Affinity; // di
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebx
  int v9; // [rsp+60h] [rbp+18h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+20h] BYREF

  Affinity = SeILSigningPolicy;
  v9 = 0;
  Handle = 0LL;
  if ( !SeILSigningPolicy )
    Affinity = (unsigned __int8)RtlpBootStatHandleLock.Affinity;
  if ( !*a3 && *a2 == Affinity && (int)RtlpOpenImageFileOptionsKeyEx(a1, (__int64)a2, (__int64)a3, &Handle) >= 0 )
  {
    if ( RtlQueryImageFileKeyOption(Handle, L"AuditLevel", 4u, &v9, 4u, 0LL) >= 0 )
    {
      v8 = v9 & 0xF;
      if ( (unsigned int)(v8 - 2) <= 0xD && v8 != Affinity )
      {
        LOBYTE(v6) = Affinity;
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
