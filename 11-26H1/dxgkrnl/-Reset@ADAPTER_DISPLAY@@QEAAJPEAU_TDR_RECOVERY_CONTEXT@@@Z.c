/*
 * XREFs of ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1401A4780
 * Callers:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x14019F50C (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000E320 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000FF90 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?OpmReset@ADAPTER_DISPLAY@@AEAAXXZ @ 0x1401A3E88 (-OpmReset@ADAPTER_DISPLAY@@AEAAXXZ.c)
 *     ?Reset@DISPLAY_SOURCE@@AEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1401A4928 (-Reset@DISPLAY_SOURCE@@AEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Reset@DXGPROTECTEDSESSION@@QEAAXXZ @ 0x1401F9DD8 (-Reset@DXGPROTECTEDSESSION@@QEAAXXZ.c)
 *     ?DmmReset@@YAXPEAX@Z @ 0x14025BD1C (-DmmReset@@YAXPEAX@Z.c)
 *     ?Reset@BLTQUEUE@@QEAAXE@Z @ 0x140283948 (-Reset@BLTQUEUE@@QEAAXE@Z.c)
 *     ?IterateOutputDuplMgrsForRender@@YAJPEAVDXGADAPTER@@P6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z2@Z @ 0x1402E68A4 (-IterateOutputDuplMgrsForRender@@YAJPEAVDXGADAPTER@@P6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z2@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::Reset(void **this, struct _TDR_RECOVERY_CONTEXT *a2)
{
  unsigned int i; // edi
  struct _TDR_RECOVERY_CONTEXT *v4; // rdx
  char *v5; // rdx
  char *j; // rcx
  char *v7; // rax
  char *v8; // rax
  DXGPROTECTEDSESSION *v9; // rsi
  DXGPROTECTEDSESSION *k; // rdi
  DXGPROTECTEDSESSION *v11; // rax
  DXGPROTECTEDSESSION *v12; // rcx
  _QWORD *v13; // rdi
  unsigned int m; // esi
  _QWORD *v15; // rbx
  __int64 v16; // rax
  _BYTE v18[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v19[24]; // [rsp+30h] [rbp-18h] BYREF

  DmmReset(this[2]);
  for ( i = 0; i < *((_DWORD *)this + 24); ++i )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v18, (struct DXGFASTMUTEX *const)(this + 78), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
    DISPLAY_SOURCE::Reset((DISPLAY_SOURCE *)((char *)this[16] + 4024 * i), v4);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v18);
  }
  IterateOutputDuplMgrsForRender(
    (struct DXGADAPTER *)this[2],
    (int (*)(struct OUTPUTDUPL_MGR *, void *))lambda_8c4f9d5363fac7cd16350590c99b22c5_::_lambda_invoker_cdecl_,
    0LL);
  ADAPTER_DISPLAY::OpmReset((ADAPTER_DISPLAY *)this);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, (struct DXGFASTMUTEX *const)(this + 4), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
  v5 = (char *)(this + 10);
  for ( j = (char *)this[10]; ; j = *(char **)j )
  {
    v7 = 0LL;
    if ( j != v5 )
      v7 = j;
    if ( !v7 )
      break;
    v8 = j;
    if ( j == v5 )
      v8 = 0LL;
    *((_DWORD *)v8 + 14) = 0;
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(this + 85));
  v9 = (DXGPROTECTEDSESSION *)(this + 91);
  for ( k = (DXGPROTECTEDSESSION *)this[91]; ; k = *(DXGPROTECTEDSESSION **)k )
  {
    v11 = 0LL;
    if ( k != v9 )
      v11 = k;
    if ( !v11 )
      break;
    v12 = k;
    if ( k == v9 )
      v12 = 0LL;
    DXGPROTECTEDSESSION::Reset(v12);
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)this + 85);
  v13 = this[58];
  if ( v13 )
  {
    for ( m = 0; m < *(_DWORD *)v13; ++m )
      BLTQUEUE::Reset((BLTQUEUE *)(v13[1] + 3040LL * m), 0);
  }
  v15 = this + 117;
  v16 = 2LL;
  do
  {
    *(v15 - 1) = 0LL;
    *v15 = 0LL;
    v15 += 10;
    --v16;
  }
  while ( v16 );
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v19);
  return 0LL;
}
