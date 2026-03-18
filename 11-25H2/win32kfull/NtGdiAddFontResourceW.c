/*
 * XREFs of NtGdiAddFontResourceW @ 0x1401A2CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x140017E24 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ?bCheckAndCapThePath@@YAHPEAGPEBGKK@Z @ 0x1401A2EBC (-bCheckAndCapThePath@@YAHPEAGPEBGKK@Z.c)
 *     ?GrepAddFontResource@@YAHPEAGKKKKPEAUtagDESIGNVECTOR@@K@Z @ 0x1401A2F68 (-GrepAddFontResource@@YAHPEAGKKKKPEAUtagDESIGNVECTOR@@K@Z.c)
 *     ?ProbeAndReadDesignVector@@YAKPEAUtagDESIGNVECTOR@@0@Z @ 0x140338CA4 (-ProbeAndReadDesignVector@@YAKPEAUtagDESIGNVECTOR@@0@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall NtGdiAddFontResourceW(
        const unsigned __int16 *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        struct tagDESIGNVECTOR *a6)
{
  unsigned int v7; // ebx
  struct tagDESIGNVECTOR *v9; // r14
  unsigned __int16 *v10; // rsi
  unsigned int v11; // edi
  int v12; // r12d
  __int64 CSRSSProcess; // rbx
  __int64 v15; // rcx
  size_t v16; // [rsp+30h] [rbp-188h]
  _BYTE v19[4]; // [rsp+80h] [rbp-138h] BYREF
  int v20; // [rsp+84h] [rbp-134h]
  unsigned __int16 v21[80]; // [rsp+D0h] [rbp-E8h] BYREF

  v7 = a3;
  v9 = a6;
  v10 = 0LL;
  v11 = 0;
  memset_0(v19, 0, 0x48uLL);
  v12 = 0;
  if ( UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() < 0 )
    return 0LL;
  if ( a4 != 0x80000000 )
    goto LABEL_3;
  CSRSSProcess = UserGetCSRSSProcess();
  if ( PsGetCurrentProcess(v15) != CSRSSProcess )
    return 0LL;
  v7 = a3;
LABEL_3:
  if ( a2 > 1 )
  {
    if ( a2 > 0x50 )
    {
      if ( a2 > 0x414 )
        v11 = 0;
      else
        v10 = (unsigned __int16 *)AllocFreeTmpBuffer(2 * a2);
    }
    else
    {
      v10 = v21;
    }
    if ( v10 )
      v11 = bCheckAndCapThePath(v10, a1, a2, v7);
  }
  if ( v11 && a6 )
  {
    if ( ProbeAndReadDesignVector((struct tagDESIGNVECTOR *)v19, a6) )
    {
      if ( v20 )
      {
        v9 = (struct tagDESIGNVECTOR *)v19;
        v12 = 4 * v20 + 8;
      }
      else
      {
        v9 = 0LL;
      }
    }
    else
    {
      v11 = 0;
    }
  }
  if ( v11 )
  {
    LODWORD(v16) = v12;
    v11 = GrepAddFontResource(v10, a2, v7, a4, a5, v9, v16);
  }
  if ( v10 )
  {
    if ( v10 != v21 )
      FreeTmpBuffer(v10);
  }
  return v11;
}
