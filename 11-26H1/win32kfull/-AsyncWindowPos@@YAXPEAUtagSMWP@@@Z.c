/*
 * XREFs of ?AsyncWindowPos@@YAXPEAUtagSMWP@@@Z @ 0x1401EF7CC
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x14002B508 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1400932CC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 */

void __fastcall AsyncWindowPos(struct tagSMWP *a1)
{
  _QWORD *v1; // rdi
  int v2; // r14d
  struct tagTHREADINFO *v3; // r15
  struct tagQ **v4; // rbp
  struct tagQ *v5; // r8
  int v6; // ebx
  int v7; // edx
  _QWORD *i; // rcx
  unsigned __int64 v9; // rax
  void *v10; // rsi
  _QWORD *v11; // rdx
  _OWORD *v12; // r8
  _OWORD *v13; // rcx

  v1 = (_QWORD *)*((_QWORD *)a1 + 5);
  v2 = *((_DWORD *)a1 + 7);
  v3 = PtiCurrent((__int64)a1);
  while ( v2 )
  {
    if ( *v1 && (v4 = (struct tagQ **)v1[13], v5 = v4[58], v5 != *((struct tagQ **)v3 + 58)) )
    {
      v6 = 0;
      v7 = v2 - 1;
      for ( i = v1; v7 >= 0; --v7 )
      {
        if ( *i && *(struct tagQ **)(i[13] + 464LL) == v5 )
          ++v6;
        i += 21;
      }
      v9 = Win32AllocPoolZInit(168LL * v6 + 48, 2004054869LL);
      v10 = (void *)v9;
      v11 = v1;
      if ( v9 )
      {
        v12 = (_OWORD *)(v9 + 48);
        *(_DWORD *)(v9 + 28) = v6;
        *(_QWORD *)(v9 + 40) = v9 + 48;
        while ( v6 )
        {
          if ( *v11 && *(struct tagQ **)(v11[13] + 464LL) == v4[58] )
          {
            *v12 = *(_OWORD *)v11;
            v13 = v12 + 8;
            v12[1] = *((_OWORD *)v11 + 1);
            v12[2] = *((_OWORD *)v11 + 2);
            v12[3] = *((_OWORD *)v11 + 3);
            v12[4] = *((_OWORD *)v11 + 4);
            v12[5] = *((_OWORD *)v11 + 5);
            v12[6] = *((_OWORD *)v11 + 6);
            v12 = (_OWORD *)((char *)v12 + 168);
            --v6;
            *(v13 - 1) = *((_OWORD *)v11 + 7);
            *v13 = *((_OWORD *)v11 + 8);
            v13[1] = *((_OWORD *)v11 + 9);
            *((_QWORD *)v13 + 4) = v11[20];
            *v11 = 0LL;
          }
          v11 += 21;
        }
        if ( !(unsigned int)PostEventMessageEx((struct tagTHREADINFO *)v4, v4[58], 3u, 0LL, 0, v9, (__int64)v4, 0LL) )
          Win32FreePool(v10);
      }
      else
      {
        while ( v6 )
        {
          if ( *(struct tagQ **)(v11[13] + 464LL) == v4[58] )
          {
            *v11 = 0LL;
            --v6;
          }
          v11 += 21;
        }
      }
    }
    else
    {
      v1 += 21;
      --v2;
    }
  }
}
