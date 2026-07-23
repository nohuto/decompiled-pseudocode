/*
 * XREFs of MiInitializeEnclave @ 0x140AB8BBC
 * Callers:
 *     NtInitializeEnclave @ 0x14087D4E0 (NtInitializeEnclave.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14027EB70 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1402B1F20 (MiObtainReferencedVadEx.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     KeInitializeEnclave @ 0x1407BD1A4 (KeInitializeEnclave.c)
 *     MiInitializeVsmEnclave @ 0x140AB8C78 (MiInitializeVsmEnclave.c)
 *     MiReturnReservedEnclavePages @ 0x140C07FA8 (MiReturnReservedEnclavePages.c)
 */

__int64 __fastcall MiInitializeEnclave(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  ULONG_PTR v8; // rax
  ULONG_PTR v9; // rdi
  __int64 v10; // r8
  int v11; // ebx
  int v12; // eax
  int v14; // [rsp+20h] [rbp-28h]
  unsigned int v15[6]; // [rsp+30h] [rbp-18h] BYREF

  v15[0] = 0;
  v8 = MiObtainReferencedVadEx(a2, 0LL, (int *)v15);
  v9 = v8;
  if ( !v8 )
    return v15[0];
  if ( (MiReadVadFlags(v8) & 0x880000) == 0x880000 )
  {
    v12 = *(_DWORD *)(v9 + 72);
    if ( (v12 & 2) != 0 )
    {
      v11 = -1073740528;
    }
    else if ( (v12 & 1) != 0 )
    {
      if ( a4 == 4096 )
      {
        v11 = KeInitializeEnclave((__int64)(*(_QWORD *)(v9 + 88) << 25) >> 16, a3, v10, a3 + 2048, v14, a5);
        if ( v11 >= 0 )
        {
          MiReturnReservedEnclavePages(v9, -1LL);
          *(_DWORD *)(v9 + 72) |= 2u;
          v11 = 0;
        }
      }
      else
      {
        v11 = -1073741820;
      }
    }
    else
    {
      v11 = MiInitializeVsmEnclave(a1, v9, a3, a4);
    }
  }
  else
  {
    v11 = -1073741800;
  }
  MiUnlockAndDereferenceVad((volatile signed __int32 *)v9);
  return (unsigned int)v11;
}
