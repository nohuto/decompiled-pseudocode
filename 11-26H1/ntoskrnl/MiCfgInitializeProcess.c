/*
 * XREFs of MiCfgInitializeProcess @ 0x14077B82C
 * Callers:
 *     MiMapProcessExecutable @ 0x140A08810 (MiMapProcessExecutable.c)
 * Callees:
 *     MiMapSecurePureReserveView @ 0x140AC6170 (MiMapSecurePureReserveView.c)
 *     MiReferenceCfgVad @ 0x140AF33F0 (MiReferenceCfgVad.c)
 */

__int64 __fastcall MiCfgInitializeProcess(__int64 a1)
{
  __int16 v2; // ax
  __int64 result; // rax
  int v4; // esi
  unsigned int v5; // edi
  struct _KTHREAD *CurrentThread; // rsi
  __int16 v7; // dx
  int Queue; // r10d
  __int64 i; // rax
  __int64 v10; // [rsp+68h] [rbp+38h] BYREF
  __int64 v11; // [rsp+70h] [rbp+40h] BYREF

  if ( (*(_DWORD *)(a1 + 1872) & 1) == 0 )
    return 0LL;
  if ( *(_QWORD *)(a1 + 872) <= 0x100000000uLL )
  {
    if ( !*(_QWORD *)(a1 + 784) )
      return 3221225595LL;
    v2 = *(_WORD *)(a1 + 1772);
    if ( v2 != 332 && v2 != 452 )
      return 3221225595LL;
  }
  v4 = *(_DWORD *)&stru_140E2D2D0.WaitBlockFill11[16];
  v10 = qword_140E2D7C8;
  v11 = 0LL;
  v5 = MiMapSecurePureReserveView(
         a1,
         *(_DWORD *)&stru_140E2D2D0.WaitBlockFill11[16],
         (unsigned int)&v10,
         (unsigned int)&v11,
         0LL);
  if ( (v5 & 0x80000000) != 0 )
  {
    if ( !qword_140E2D7C8 )
      return v5;
    v10 = 0LL;
    v11 = 0LL;
    v5 = MiMapSecurePureReserveView(a1, v4, (unsigned int)&v10, (unsigned int)&v11, 0LL);
    if ( (v5 & 0x80000000) != 0 )
      return v5;
  }
  CurrentThread = KeGetCurrentThread();
  MiReferenceCfgVad(CurrentThread, v10, 0LL);
  if ( !*(_QWORD *)(a1 + 784) )
    return v5;
  v7 = *(_WORD *)(a1 + 1772);
  if ( v7 != 332 && v7 != 452 )
    return v5;
  Queue = 0;
  for ( i = 0LL; !(_DWORD)i; i = 1LL )
  {
    if ( v7 == MiWowSubsystems6432[i] )
    {
      Queue = (int)stru_140E2D2D0.Queue;
      break;
    }
  }
  v11 = *(_QWORD *)(a1 + 872) >> 6;
  v10 = 0LL;
  result = MiMapSecurePureReserveView(a1, Queue, (unsigned int)&v10, (unsigned int)&v11, 0LL);
  v5 = result;
  if ( (int)result >= 0 )
  {
    MiReferenceCfgVad(CurrentThread, v10, 1LL);
    return v5;
  }
  return result;
}
