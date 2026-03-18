/*
 * XREFs of NtGdiQueryFonts @ 0x14033A380
 * Callers:
 *     <none>
 * Callees:
 *     ?GreQueryFonts@@YAHPEAU_UNIVERSAL_FONT_ID@@KPEAT_LARGE_INTEGER@@@Z @ 0x140327804 (-GreQueryFonts@@YAHPEAU_UNIVERSAL_FONT_ID@@KPEAT_LARGE_INTEGER@@@Z.c)
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall NtGdiQueryFonts(char *a1, unsigned int a2, void *a3)
{
  unsigned int v4; // esi
  unsigned int v6; // ebx
  struct _UNIVERSAL_FONT_ID *v7; // rdi
  size_t v8; // r8
  union _LARGE_INTEGER Src; // [rsp+68h] [rbp+20h] BYREF

  v4 = a2;
  v6 = 0;
  v7 = 0LL;
  Src.QuadPart = 0LL;
  if ( a2 && a1 )
  {
    if ( a2 <= 0x4E2000 )
      v7 = (struct _UNIVERSAL_FONT_ID *)AllocFreeTmpBuffer(8 * a2);
    if ( !v7 )
      v6 = -1;
  }
  if ( v6 != -1 )
  {
    v6 = GreQueryFonts(v7, v4, &Src);
    if ( v6 != -1 )
    {
      if ( (unsigned __int64)a3 >= MmUserProbeAddress )
        a3 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(a3, &Src, 8uLL);
      if ( a1 )
      {
        if ( v6 < v4 )
          v4 = v6;
        v8 = 8LL * v4;
        if ( (unsigned __int64)&a1[v8] > MmUserProbeAddress || &a1[v8] <= a1 || ((unsigned __int8)a1 & 3) != 0 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a1, v7, v8);
      }
    }
  }
  if ( v7 )
    FreeTmpBuffer(v7);
  if ( v6 == -1 )
    EngSetLastError(8u);
  return v6;
}
