/*
 * XREFs of NtGdiGetFontResourceInfoInternalW @ 0x140339B00
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM @ 0x140108044 (PALLOCMEM.c)
 *     ?bCheckAndCapThePath@@YAHPEAGPEBGKK@Z @ 0x1401A2EBC (-bCheckAndCapThePath@@YAHPEAGPEBGKK@Z.c)
 *     ?GetFontResourceInfoInternalW@@YAHPEBGKKIPEA_KPEAXK@Z @ 0x14022924C (-GetFontResourceInfoInternalW@@YAHPEBGKKIPEA_KPEAXK@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memmove @ 0x140342600 (memmove.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall NtGdiGetFontResourceInfoInternalW(
        unsigned __int16 *a1,
        unsigned int a2,
        int a3,
        unsigned int a4,
        ULONG64 a5,
        void *a6,
        unsigned int a7)
{
  unsigned __int16 *v10; // rdi
  unsigned int FontResourceInfoInternalW; // esi
  unsigned int *v12; // rbx
  _DWORD *v13; // rcx
  ULONG64 v14; // rax
  unsigned __int64 v16; // [rsp+70h] [rbp-168h] BYREF
  unsigned __int16 *v17; // [rsp+78h] [rbp-160h]
  void *v18; // [rsp+80h] [rbp-158h]
  _BYTE v19[96]; // [rsp+90h] [rbp-148h] BYREF
  unsigned __int16 v20[80]; // [rsp+F0h] [rbp-E8h] BYREF

  v17 = a1;
  v18 = a6;
  v10 = 0LL;
  FontResourceInfoInternalW = 0;
  v16 = 0LL;
  v12 = 0LL;
  memset_0(v19, 0, 0x5CuLL);
  if ( a2 > 1 )
  {
    if ( a2 > 0x50 )
    {
      if ( a2 <= 0x1388000 )
        v10 = (unsigned __int16 *)AllocFreeTmpBuffer(2 * a2);
    }
    else
    {
      v10 = v20;
    }
    if ( v10 )
      FontResourceInfoInternalW = bCheckAndCapThePath(v10, v17, a2, a3);
  }
  if ( a4 <= 0x5C )
  {
    v12 = (unsigned int *)v19;
  }
  else if ( a4 > 0x2710000 || (v12 = (unsigned int *)PALLOCMEM(a4, 1886221383LL)) == 0LL )
  {
    FontResourceInfoInternalW = 0;
  }
  if ( FontResourceInfoInternalW )
  {
    FontResourceInfoInternalW = GetFontResourceInfoInternalW(v10, a2, a3, a4, &v16, v12, a7);
    if ( FontResourceInfoInternalW )
    {
      v13 = (_DWORD *)a5;
      if ( a5 >= MmUserProbeAddress )
        v13 = (_DWORD *)MmUserProbeAddress;
      *v13 = v16;
      if ( a4 )
      {
        v14 = (ULONG64)a6 + a4;
        if ( v14 > MmUserProbeAddress || v14 <= (unsigned __int64)a6 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a6, v12, a4);
      }
    }
  }
  if ( v10 && v10 != v20 )
    FreeTmpBuffer(v10);
  if ( v12 && v12 != (unsigned int *)v19 )
    Win32FreePool(v12);
  return FontResourceInfoInternalW;
}
