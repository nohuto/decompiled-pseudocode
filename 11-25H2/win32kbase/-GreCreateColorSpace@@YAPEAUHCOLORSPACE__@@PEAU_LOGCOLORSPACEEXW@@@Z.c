/*
 * XREFs of ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x14014C7D0
 * Callers:
 *     NtGdiCreateColorSpace @ 0x1401D2040 (NtGdiCreateColorSpace.c)
 *     bInitICM @ 0x1402EA32C (bInitICM.c)
 * Callees:
 *     EngSetLastError @ 0x140015E30 (EngSetLastError.c)
 *     HmgDecrementShareReferenceCountEx @ 0x14001CA40 (HmgDecrementShareReferenceCountEx.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x14001F850 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x14001F87C (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     HmgInsertObjectInternal @ 0x14001F910 (HmgInsertObjectInternal.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1400696EC (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     AllocateObject @ 0x14014C910 (AllocateObject.c)
 *     FreeObject @ 0x14014C950 (FreeObject.c)
 */

struct HOBJ__ *__fastcall GreCreateColorSpace(struct _LOGCOLORSPACEEXW *a1)
{
  struct HOBJ__ *v1; // rbx
  __int64 Object; // rsi
  struct HOBJ__ *inserted; // rax
  _BYTE v6[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]

  v1 = 0LL;
  if ( *(_DWORD *)a1 == 1347637059 && *((_DWORD *)a1 + 1) == 1024 && *((_DWORD *)a1 + 2) == 588 )
  {
    Object = AllocateObject(0x268u, 9u);
    if ( Object )
    {
      HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v6);
      inserted = 0LL;
      if ( v7 || (inserted = HmgInsertObjectInternal((struct OBJECT *)Object, 3, 9u)) == 0LL )
      {
        v1 = inserted;
        FreeObject(Object, 9LL);
      }
      else
      {
        v1 = inserted;
        v7 = Object;
        *(_DWORD *)(Object + 24) = *(_DWORD *)a1;
        *(_DWORD *)(Object + 28) = *((_DWORD *)a1 + 1);
        *(_DWORD *)(Object + 32) = *((_DWORD *)a1 + 2);
        *(_DWORD *)(Object + 36) = *((_DWORD *)a1 + 3);
        *(_DWORD *)(Object + 40) = *((_DWORD *)a1 + 4);
        *(_OWORD *)(Object + 44) = *(_OWORD *)((char *)a1 + 20);
        *(_OWORD *)(Object + 60) = *(_OWORD *)((char *)a1 + 36);
        *(_DWORD *)(Object + 76) = *((_DWORD *)a1 + 13);
        *(_DWORD *)(Object + 80) = *((_DWORD *)a1 + 14);
        *(_DWORD *)(Object + 84) = *((_DWORD *)a1 + 15);
        *(_DWORD *)(Object + 88) = *((_DWORD *)a1 + 16);
        StringCchCopyW((unsigned __int16 *)(Object + 92), 0x104uLL, (size_t *)((char *)a1 + 68));
        *(_DWORD *)(Object + 612) = *((_DWORD *)a1 + 147);
        HmgDecrementShareReferenceCountEx((struct _BASEOBJECT *)Object, 0LL);
      }
      HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v6);
    }
    return v1;
  }
  else
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
}
