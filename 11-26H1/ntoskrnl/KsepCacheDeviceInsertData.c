/*
 * XREFs of KsepCacheDeviceInsertData @ 0x1407C1AEC
 * Callers:
 *     KsepDbCacheReadDeviceInternal @ 0x1409D767C (KsepDbCacheReadDeviceInternal.c)
 * Callees:
 *     KsepPoolAllocatePaged @ 0x1404D7BFC (KsepPoolAllocatePaged.c)
 *     KsepPoolFreePaged @ 0x1404DC150 (KsepPoolFreePaged.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     KsepStringDuplicate @ 0x1409D73AC (KsepStringDuplicate.c)
 *     KsepStringFree @ 0x1409D7848 (KsepStringFree.c)
 */

__int64 __fastcall KsepCacheDeviceInsertData(__int64 a1, __int64 a2, const void *a3, int a4, unsigned int Size)
{
  __int64 Paged; // rax
  _QWORD *v10; // rbx
  int v11; // edi
  void *v12; // rax
  _QWORD *v14; // rcx

  Paged = KsepPoolAllocatePaged();
  v10 = (_QWORD *)Paged;
  if ( !Paged )
    return (unsigned int)-1073741801;
  v11 = KsepStringDuplicate(Paged + 16, a2);
  if ( v11 < 0 )
  {
LABEL_6:
    KsepStringFree(v10 + 2);
    KsepPoolFreePaged((void *)v10[5]);
    KsepPoolFreePaged(v10);
    return (unsigned int)v11;
  }
  v12 = (void *)KsepPoolAllocatePaged();
  v10[5] = v12;
  if ( !v12 )
  {
    v11 = -1073741801;
    goto LABEL_6;
  }
  memmove(v12, a3, Size);
  *((_DWORD *)v10 + 9) = a4;
  *((_DWORD *)v10 + 8) = Size;
  v14 = *(_QWORD **)(a1 + 64);
  if ( *v14 != a1 + 56 )
    __fastfail(3u);
  *v10 = a1 + 56;
  v11 = 0;
  v10[1] = v14;
  *v14 = v10;
  *(_QWORD *)(a1 + 64) = v10;
  return (unsigned int)v11;
}
