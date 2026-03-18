/*
 * XREFs of ?bOffset@RGNOBJ@@QEAAHPEBU_POINTL@@@Z @ 0x14001FDF0
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x140037910 (-bCompute@DC@@QEAAHXZ.c)
 *     ?vOffset@EPATHOBJ@@QEAAXAEBVEPOINTL@@@Z @ 0x14012ACC0 (-vOffset@EPATHOBJ@@QEAAXAEBVEPOINTL@@@Z.c)
 *     EngUpdateDeviceSurface @ 0x1401F1910 (EngUpdateDeviceSurface.c)
 * Callees:
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x1400151C0 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 *     EngSetLastError @ 0x140020060 (EngSetLastError.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RGNOBJ::bOffset(RGNOBJ *this, const struct _POINTL *a2)
{
  _DWORD *v3; // rcx
  __int64 x; // rdi
  __int64 y; // r10
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v12; // rbx
  __int64 v13; // rsi
  unsigned int v14; // edi
  int v15; // ebx
  int v16; // r8d
  int v17; // r9d
  int v18; // edx
  int v19; // r9d
  unsigned int *i; // rax
  __int64 v21; // rdx
  unsigned int *v22; // r8
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int128 v26; // [rsp+30h] [rbp-18h]

  if ( WPP_MAIN_CB.Dpc.DeferredContext )
  {
    v12 = *(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext;
    v13 = *(_QWORD *)this + 24LL;
    if ( !*(_QWORD *)this )
      v13 = 0LL;
    v14 = (*(__int64 (__fastcall **)(__int64, const struct _POINTL *))(v12 + 96))(v13, a2);
    if ( !(*(unsigned int (__fastcall **)(__int64))(v12 + 176))(v13) )
      GrepCaptureLiveMemoryDump(400LL, 64LL, v13, 0LL, 0LL, 0);
    return v14;
  }
  else
  {
    v3 = *(_DWORD **)this;
    x = a2->x;
    y = a2->y;
    if ( v3[12] != 1 )
    {
      v6 = (int)v3[13];
      v7 = (int)v3[15];
      v8 = (int)v3[14];
      v9 = (int)v3[16];
      if ( (int)v6 < (int)v7 && (int)v8 < (int)v9 )
      {
        v10 = x + v6;
        if ( x + v6 < (__int64)0xFFFFFFFF80000000uLL )
          goto LABEL_6;
        if ( v10 > 0x7FFFFFFF )
          goto LABEL_6;
        v23 = y + v9;
        if ( y + v9 < (__int64)0xFFFFFFFF80000000uLL )
          goto LABEL_6;
        if ( v23 > 0x7FFFFFFF )
          goto LABEL_6;
        v24 = v7 + x;
        HIDWORD(v26) = y + v9;
        if ( v7 + x < (__int64)0xFFFFFFFF80000000uLL )
          goto LABEL_6;
        if ( v24 > 0x7FFFFFFF )
          goto LABEL_6;
        v25 = y + v8;
        if ( y + v8 < (__int64)0xFFFFFFFF80000000uLL )
          goto LABEL_6;
        if ( v25 > 0x7FFFFFFF )
          goto LABEL_6;
        v15 = v10 & 0xF8000000;
        if ( v15 )
        {
          if ( v15 != -134217728 )
            goto LABEL_6;
        }
        if ( (v16 = v23 & 0xF8000000) != 0 && v16 != -134217728
          || (v17 = v24 & 0xF8000000) != 0 && v17 != -134217728
          || (v18 = v25 & 0xF8000000) != 0 && v18 != -134217728 )
        {
LABEL_6:
          EngSetLastError(0x216u);
          return 0LL;
        }
        LODWORD(v26) = x + v6;
        DWORD1(v26) = y + v8;
        DWORD2(v26) = v7 + x;
        *(_OWORD *)(v3 + 13) = v26;
        v19 = *(_DWORD *)(*(_QWORD *)this + 48LL);
        for ( i = *(unsigned int **)(*(_QWORD *)this + 24LL); v19; i += *i + 4 )
        {
          i[1] += y;
          --v19;
          i[2] += y;
          v21 = *i;
          if ( (_DWORD)v21 )
          {
            v22 = &i[v21 + 3];
            do
            {
              *--v22 += x;
              LODWORD(v21) = v21 - 1;
            }
            while ( (_DWORD)v21 );
          }
        }
        i[-*(i - 1) - 2] = 0x7FFFFFFF;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 4LL) = 0x80000000;
      }
    }
    return 1LL;
  }
}
