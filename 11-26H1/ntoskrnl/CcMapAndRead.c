/*
 * XREFs of CcMapAndRead @ 0x1402C86B0
 * Callers:
 *     CcPinFileData @ 0x1402C1530 (CcPinFileData.c)
 *     CcPrepareMdlWrite @ 0x1404C7470 (CcPrepareMdlWrite.c)
 *     CcMapData @ 0x1409DFB60 (CcMapData.c)
 * Callees:
 *     MmCheckCachedPageStates @ 0x1402C8850 (MmCheckCachedPageStates.c)
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 */

__int64 __fastcall CcMapAndRead(unsigned int a1, int a2, char a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int8 v5; // r12
  int v6; // eax
  int v8; // r11d
  int v9; // edx
  NTSTATUS v10; // r10d
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r14
  unsigned int v13; // edi
  unsigned int v14; // eax
  unsigned int v15; // r8d
  int v16; // ebp
  int v17; // eax
  bool v18; // zf
  char v20; // [rsp+60h] [rbp+8h] BYREF
  char v21; // [rsp+70h] [rbp+18h]
  int v22; // [rsp+78h] [rbp+20h]

  v21 = a3;
  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v6 = BYTE4(CurrentThread[1].Queue);
  v8 = 1;
  v9 = 2;
  v20 = 1;
  if ( a3 )
    v9 = 0;
  v10 = 0;
  v22 = v9;
  v11 = ((a4 & 0xFFF) + (unsigned __int64)a1 + 4095) >> 12;
  v12 = a4 & 0xFFFFFFFFFFFFF000uLL;
  v13 = v6 + 2 * LODWORD(CurrentThread[1].WaitListEntry.Flink);
  while ( (_DWORD)v11 )
  {
    v14 = v11 - 1;
    BYTE4(CurrentThread[1].Queue) = 1;
    if ( (unsigned int)(v11 - 1) > LODWORD(CurrentThread[1].WaitListEntry.Flink) )
    {
      if ( v14 <= 0xF )
        LODWORD(CurrentThread[1].WaitListEntry.Flink) = v14;
      else
        LODWORD(CurrentThread[1].WaitListEntry.Flink) = 15;
    }
    v15 = 0;
    if ( a2 )
    {
      v16 = 1;
      if ( v8 == 2 )
        v16 = v11 - 1;
    }
    else
    {
      v16 = v11;
    }
    LOBYTE(v15) = (v8 & a2) != 0;
    v17 = MmCheckCachedPageStates(v12, (unsigned int)(v16 << 12), v9 | v15, &v20);
    v10 = v17;
    if ( !v20 && !v21 )
    {
      LODWORD(CurrentThread[1].WaitListEntry.Flink) = v13 >> 1;
      BYTE4(CurrentThread[1].Queue) = v13 & 1;
      return v5;
    }
    if ( v17 < 0 )
      goto LABEL_14;
    v9 = v22;
    v12 += (unsigned int)(v16 << 12);
    LODWORD(v11) = v11 - v16;
    v8 = 4;
    if ( (_DWORD)v11 != 1 )
      v8 = 2;
  }
  v5 = 1;
LABEL_14:
  LODWORD(CurrentThread[1].WaitListEntry.Flink) = v13 >> 1;
  v18 = v21 == 0;
  BYTE4(CurrentThread[1].Queue) = v13 & 1;
  if ( !v18 && v10 < 0 )
    RtlRaiseStatus(v10);
  return v5;
}
