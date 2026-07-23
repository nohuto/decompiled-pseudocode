/*
 * XREFs of MiCreateEnclave @ 0x14087C3B8
 * Callers:
 *     NtCreateEnclave @ 0x14087D0E0 (NtCreateEnclave.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14027EB70 (MiUnlockAndDereferenceVad.c)
 *     MiCreateHardwareEnclave @ 0x14087C4D4 (MiCreateHardwareEnclave.c)
 *     MiCreateVsmEnclave @ 0x14087C860 (MiCreateVsmEnclave.c)
 *     MiDeleteVad @ 0x140A017D0 (MiDeleteVad.c)
 *     MiAllocateEnclaveVad @ 0x140B6C330 (MiAllocateEnclaveVad.c)
 */

__int64 __fastcall MiCreateEnclave(
        int a1,
        _QWORD *a2,
        int a3,
        int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        int a8,
        __int64 a9)
{
  int EnclaveVad; // eax
  volatile signed __int32 *v12; // rbx
  int v13; // edi
  int VsmEnclave; // eax
  PVOID P[3]; // [rsp+30h] [rbp-18h] BYREF

  P[0] = 0LL;
  EnclaveVad = MiAllocateEnclaveVad(a6, a4, *a2, a3, (__int64)P);
  v12 = (volatile signed __int32 *)P[0];
  v13 = EnclaveVad;
  if ( EnclaveVad >= 0 )
  {
    *a2 = (*((unsigned int *)P[0] + 6) | ((unsigned __int64)*((unsigned __int8 *)P[0] + 32) << 32)) << 12;
    if ( (unsigned int)(a6 - 16) <= 1 )
    {
      *((_QWORD *)v12 + 12) = v12 + 22;
      *((_QWORD *)v12 + 11) = v12 + 22;
      VsmEnclave = MiCreateVsmEnclave(a1, (_DWORD)v12, a6, a7, a8);
    }
    else
    {
      if ( a8 != 4096 )
      {
        v13 = -1073741811;
        goto LABEL_8;
      }
      VsmEnclave = MiCreateHardwareEnclave(a1, (_DWORD)v12, a5, a7, a9);
    }
    v13 = VsmEnclave;
  }
LABEL_8:
  if ( v12 )
  {
    if ( v13 >= 0 )
      MiUnlockAndDereferenceVad(v12);
    else
      MiDeleteVad((ULONG_PTR)v12);
  }
  return (unsigned int)v13;
}
