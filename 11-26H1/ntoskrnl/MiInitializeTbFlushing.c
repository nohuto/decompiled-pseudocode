/*
 * XREFs of MiInitializeTbFlushing @ 0x140D05B90
 * Callers:
 *     MiInitSystem @ 0x140CF7944 (MiInitSystem.c)
 * Callees:
 *     KeGetTbSize @ 0x140CD1160 (KeGetTbSize.c)
 *     MiInitializeTbFlush @ 0x140D05A54 (MiInitializeTbFlush.c)
 */

unsigned __int64 MiInitializeTbFlushing()
{
  unsigned int TbSize; // eax
  __int64 v1; // rdx
  __int64 v2; // r8
  unsigned __int64 v3; // r9
  unsigned int v4; // ebx
  unsigned __int64 result; // rax
  __int64 v6; // r8
  unsigned __int64 v7; // r9

  TbSize = KeGetTbSize();
  qword_140E2D910 = -1LL;
  v4 = TbSize;
  if ( !TbSize )
    v4 = 2048;
  result = MiInitializeTbFlush(v4, v1, v2, v3);
  if ( qword_140E2D910 == v4 && v4 != 2048 )
  {
    qword_140E2D910 = -1LL;
    return MiInitializeTbFlush(0x800u, v4, v6, v7);
  }
  return result;
}
