/*
 * XREFs of MiConvertStaticSubsections @ 0x14047A2F0
 * Callers:
 *     MiInsertUnusedSegment @ 0x14047A120 (MiInsertUnusedSegment.c)
 * Callees:
 *     MiRemoveViewsFromSection @ 0x14036F4F0 (MiRemoveViewsFromSection.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiConvertStaticSubsections(__int64 a1)
{
  __int64 v1; // rdi
  ULONG_PTR v2; // rbx
  int v3; // ecx
  int v4; // eax
  int v5; // r8d
  __int64 v6; // rdx
  unsigned __int64 v7; // rdx

  v1 = 0LL;
  v2 = a1 + 128;
  do
  {
    v3 = *(_DWORD *)(v2 + 32);
    if ( (v3 & 0x80000) == 0 )
    {
      if ( (v3 & 0x10000) != 0 )
      {
        v4 = *(_DWORD *)(v2 + 48);
        if ( (v4 & 0x3FFFFFFF) != 0 )
        {
          v6 = *(_QWORD *)v2;
          *(_DWORD *)(v2 + 48) = v4 | 0x3FFFFFFF;
          v5 = 12;
          *(_DWORD *)(v6 + 56) |= 0x8000000u;
        }
        else
        {
          v5 = 2;
        }
        v7 = *(unsigned int *)(v2 + 44);
        *(_DWORD *)(v2 + 32) = v3 & 0xFFFEFFFF;
        *(_QWORD *)(v2 + 80) = 1LL;
        v1 += MiRemoveViewsFromSection(v2, v7, v5);
      }
      else if ( *(_QWORD *)(v2 + 8) && !*(_QWORD *)(v2 + 80) )
      {
        KeBugCheckEx(0x1Au, 0x42003uLL, v2, 0LL, 0LL);
      }
    }
    v2 = *(_QWORD *)(v2 + 16);
  }
  while ( v2 );
  return v1;
}
