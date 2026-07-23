/*
 * XREFs of UpcaseUnicodeToMultiByteNHelper @ 0x1404363C0
 * Callers:
 *     RtlUpcaseUnicodeToOemN @ 0x14097C090 (RtlUpcaseUnicodeToOemN.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x14097C810 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x14097D0C0 (RtlUpcaseUnicodeToMultiByteN.c)
 * Callees:
 *     PsIsServerSilo @ 0x140216B68 (PsIsServerSilo.c)
 */

__int64 __fastcall UpcaseUnicodeToMultiByteNHelper(
        _BYTE *a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned __int16 *a4,
        unsigned int a5)
{
  _DWORD *v6; // rdi
  unsigned int v7; // r11d
  _BYTE *v8; // r10
  int v9; // ebp
  struct _KTHREAD *CurrentThread; // rax
  __int64 Blink; // rcx
  _QWORD *v12; // r8
  unsigned int v13; // ebx
  __int64 v14; // r15
  __int64 v15; // r14
  __int64 v16; // r12
  __int64 v17; // r13
  __int64 v18; // rax
  unsigned __int16 v19; // cx
  __int64 v20; // rdx
  unsigned __int16 v21; // r9
  __int16 v22; // dx
  unsigned int v24; // eax

  v6 = a3;
  v7 = a2;
  v8 = a1;
  v9 = (int)a1;
  if ( KeGetPcr()->Prcb.NestingLevel )
    goto LABEL_5;
  CurrentThread = KeGetCurrentThread();
  Blink = (__int64)CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
  if ( Blink == -3 )
  {
    Blink = CurrentThread->Process[3].ActiveGroupsMask.Masks[0];
  }
  else if ( Blink && !PsIsServerSilo(Blink) )
  {
    while ( !PsIsServerSilo(*(_QWORD *)(Blink + 1304)) )
      ;
  }
  if ( Blink )
    v12 = *(_QWORD **)(Blink + 1504);
  else
LABEL_5:
    v12 = &PspHostSiloGlobals;
  v13 = a5;
  v14 = v12[133];
  v15 = v12[134];
  v16 = v12[147];
  v17 = v12[150];
  if ( a5 )
  {
    while ( v7 )
    {
      v18 = *a4++;
      v19 = *(_WORD *)(v15 + 2 * v18);
      v20 = *(unsigned __int16 *)(v16 + 2 * ((unsigned __int64)v19 >> 8));
      if ( (_WORD)v20 )
        v21 = *(_WORD *)(v12[136] + 2 * (v20 + (unsigned __int8)v19));
      else
        v21 = *(_WORD *)(v14 + 2LL * (unsigned __int8)v19);
      if ( v21 >= 0x61u )
      {
        if ( v21 > 0x7Au )
        {
          if ( v17 && v21 >= 0xC0u )
            v21 += *(_WORD *)(v17
                            + 2LL
                            * ((v21 & 0xF)
                             + (unsigned int)*(unsigned __int16 *)(v17
                                                                 + 2LL
                                                                 * (((v21 >> 4) & 0xF)
                                                                  + (unsigned int)*(unsigned __int16 *)(v17 + 2 * ((unsigned __int64)v21 >> 8))))));
        }
        else
        {
          v21 -= 32;
        }
      }
      v22 = *(_WORD *)(v15 + 2LL * v21);
      if ( HIBYTE(v22) )
      {
        v24 = v7--;
        if ( v24 < 2 )
          break;
        *v8++ = HIBYTE(v22);
      }
      *v8 = v22;
      --v7;
      ++v8;
      if ( !--v13 )
        break;
    }
    v6 = a3;
  }
  if ( v6 )
    *v6 = (_DWORD)v8 - v9;
  return v7 < v13 ? 0x80000005 : 0;
}
