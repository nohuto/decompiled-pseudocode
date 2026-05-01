/*
 * XREFs of ?Clear@RtlNameValueArray@@QEAAXXZ @ 0x18015A6C0
 * Callers:
 *     ?Free@RtlNameValueArray@@QEAAXXZ @ 0x18015A67C (-Free@RtlNameValueArray@@QEAAXXZ.c)
 * Callees:
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x180143394 (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 */

void __fastcall RtlNameValueArray::Clear(RtlNameValueArray *this)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rcx
  PVOID *v4; // rax
  size_t Size; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  v3 = *((_QWORD *)this + 2);
  if ( v3 )
  {
    do
    {
      v4 = 0LL;
      if ( v2 < v3 )
      {
        Size = 0LL;
        if ( !is_mul_ok(*((_QWORD *)this + 1), v2)
          || (v4 = (PVOID *)(*((_QWORD *)this + 5) + *((_QWORD *)this + 1) * v2),
              (unsigned __int64)v4 < *((_QWORD *)this + 5)) )
        {
          v4 = 0LL;
        }
      }
      if ( *v4 )
        RtlFreeHeap(*(HANDLE *)this, 0, *v4);
      v3 = *((_QWORD *)this + 2);
      ++v2;
    }
    while ( v2 < v3 );
  }
  Size = 0LL;
  if ( v3 )
  {
    if ( (int)ULongLongMult(v3, *((_QWORD *)this + 1), &Size) >= 0 )
    {
      memset_0(*((void **)this + 5), 0, Size);
      *((_QWORD *)this + 2) = 0LL;
    }
  }
}
