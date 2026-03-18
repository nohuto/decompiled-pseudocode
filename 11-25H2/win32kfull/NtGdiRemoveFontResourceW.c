/*
 * XREFs of NtGdiRemoveFontResourceW @ 0x1401A2AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?bCheckAndCapThePath@@YAHPEAGPEBGKK@Z @ 0x1401A2EBC (-bCheckAndCapThePath@@YAHPEAGPEBGKK@Z.c)
 *     ?GrepRemoveFontResource@@YAHPEBGKKKKPEAUtagDESIGNVECTOR@@K@Z @ 0x1401A3438 (-GrepRemoveFontResource@@YAHPEBGKKKKPEAUtagDESIGNVECTOR@@K@Z.c)
 *     ?ProbeAndReadDesignVector@@YAKPEAUtagDESIGNVECTOR@@0@Z @ 0x140338CA4 (-ProbeAndReadDesignVector@@YAKPEAUtagDESIGNVECTOR@@0@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall NtGdiRemoveFontResourceW(
        const unsigned __int16 *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        struct tagDESIGNVECTOR *a6)
{
  struct tagDESIGNVECTOR *v9; // rsi
  unsigned __int16 *v10; // rbx
  unsigned int v11; // edi
  unsigned int v12; // r15d
  _BYTE v15[4]; // [rsp+70h] [rbp-138h] BYREF
  int v16; // [rsp+74h] [rbp-134h]
  unsigned __int16 v17[80]; // [rsp+C0h] [rbp-E8h] BYREF

  v9 = a6;
  v10 = 0LL;
  v11 = 0;
  memset_0(v15, 0, 0x48uLL);
  v12 = 0;
  if ( a2 > 1 )
  {
    if ( a2 > 0x50 )
    {
      if ( a2 <= 0x1388000 )
        v10 = (unsigned __int16 *)AllocFreeTmpBuffer(2 * a2);
    }
    else
    {
      v10 = v17;
    }
    if ( v10 )
      v11 = bCheckAndCapThePath(v10, a1, a2, a3);
  }
  if ( v11 && a6 )
  {
    if ( ProbeAndReadDesignVector((struct tagDESIGNVECTOR *)v15, a6) )
    {
      if ( v16 )
      {
        v9 = (struct tagDESIGNVECTOR *)v15;
        v12 = 4 * v16 + 8;
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
    v11 = GrepRemoveFontResource(v10, a2, a3, a4, a5, v9, v12);
  if ( v10 && v10 != v17 )
    FreeTmpBuffer(v10);
  return v11;
}
