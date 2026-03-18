/*
 * XREFs of MmGetImageInformation @ 0x140942C3C
 * Callers:
 *     RtlpLookupUserFunctionTable @ 0x1402E9910 (RtlpLookupUserFunctionTable.c)
 *     RtlGetImageBaseAndLoadConfig @ 0x14043BE50 (RtlGetImageBaseAndLoadConfig.c)
 *     EtwTimLogControlProtectionUserModeReturnMismatch @ 0x14082A7E0 (EtwTimLogControlProtectionUserModeReturnMismatch.c)
 *     EtwpLocateDbgIdForRegEntry @ 0x140942658 (EtwpLocateDbgIdForRegEntry.c)
 *     KiCheckUserAddressCetCompat @ 0x140942AB8 (KiCheckUserAddressCetCompat.c)
 * Callees:
 *     MiUnlockAndDereferenceVadShared @ 0x14027DA30 (MiUnlockAndDereferenceVadShared.c)
 *     MiObtainReferencedVadEx @ 0x1402D0160 (MiObtainReferencedVadEx.c)
 *     MmIsUserAddress @ 0x14044E7C0 (MmIsUserAddress.c)
 *     MiReadVadFlags @ 0x1404655D0 (MiReadVadFlags.c)
 */

__int64 __fastcall MmGetImageInformation(unsigned __int64 a1, _QWORD *a2, _QWORD *a3, int *a4)
{
  unsigned int v8; // ebx
  ULONG_PTR v9; // rax
  ULONG_PTR v10; // r10
  int v12[6]; // [rsp+20h] [rbp-18h] BYREF

  v8 = 0;
  if ( !MmIsUserAddress(a1) )
    return 3221225485LL;
  v9 = MiObtainReferencedVadEx(a1, 6LL, v12);
  if ( v9 )
  {
    if ( (MiReadVadFlags(v9) & 0x1C) == 8 )
    {
      *a2 = (*(unsigned int *)(v10 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32)) << 12;
      *a3 = ((*(unsigned int *)(v10 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 33) << 32))
           - (*(unsigned int *)(v10 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32))
           + 1) << 12;
      *a4 = *(_DWORD *)(*(_QWORD *)(***(_QWORD ***)(v10 + 80) + 56LL) + 76LL) & 1;
    }
    else
    {
      v8 = -1073741751;
    }
    MiUnlockAndDereferenceVadShared(v10);
  }
  else
  {
    return (unsigned int)-1073741800;
  }
  return v8;
}
