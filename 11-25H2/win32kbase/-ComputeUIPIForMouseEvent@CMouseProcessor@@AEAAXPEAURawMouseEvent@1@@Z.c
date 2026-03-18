/*
 * XREFs of ?ComputeUIPIForMouseEvent@CMouseProcessor@@AEAAXPEAURawMouseEvent@1@@Z @ 0x14018F918
 * Callers:
 *     ?xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x140222878 (-xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsInputThread @ 0x1400BD250 (IsInputThread.c)
 */

void __fastcall CMouseProcessor::ComputeUIPIForMouseEvent(
        CMouseProcessor *this,
        struct CMouseProcessor::RawMouseEvent *a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // esi
  char v5; // r14
  __int64 v6; // xmm0_8
  struct tagTHREADINFO *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // [rsp+20h] [rbp-30h]
  __int128 v10; // [rsp+30h] [rbp-20h]
  int v11; // [rsp+40h] [rbp-10h]

  v9 = 0xFFFFFFFFLL;
  v2 = 0;
  v4 = 0;
  if ( IsInputThread((__int64)this, (__int64)a2) && *((_BYTE *)a2 + 140) )
  {
    v5 = 1;
    v6 = *(_QWORD *)((char *)a2 + 124);
    v4 = *((_DWORD *)a2 + 33);
    LOBYTE(v2) = *((_DWORD *)a2 + 34) != 0;
LABEL_6:
    v9 = v6;
    goto LABEL_7;
  }
  v5 = 0;
  v7 = PtiCurrent();
  if ( v7 )
  {
    v8 = *((_QWORD *)v7 + 58);
    v6 = *(_QWORD *)(v8 + 864);
    v4 = *(_DWORD *)(v8 + 872);
    v2 = *(_DWORD *)(v8 + 12) >> 31;
    goto LABEL_6;
  }
LABEL_7:
  *(_QWORD *)&v10 = v9;
  *((_QWORD *)&v10 + 1) = __PAIR64__(v2, v4);
  LOBYTE(v11) = v5;
  *((_OWORD *)a2 + 9) = v10;
  *((_DWORD *)a2 + 40) = v11;
}
