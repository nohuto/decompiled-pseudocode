/*
 * XREFs of ?GetOcclusionKind@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4CoreInputViewOcclusionKind@Core@ViewManagement@UI@Windows@@@Z @ 0x18018F7B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::GetOcclusionKind(
        RTL_SRWLOCK *this,
        int a2,
        enum Windows::UI::ViewManagement::Core::CoreInputViewOcclusionKind *a3)
{
  RTL_SRWLOCK *v3; // rdi
  int v7; // ebx
  __int64 v8; // r9
  unsigned __int64 i; // r10
  __int64 v10; // rax
  _QWORD *Ptr; // rdx
  __int64 v12; // rcx
  char *v13; // r9
  __int64 v14; // rcx
  char *v15; // rax
  __m128i v16; // xmm4
  __m128i v17; // xmm3
  int v18; // eax
  int v20; // [rsp+98h] [rbp+10h]

  v20 = a2;
  v3 = this + 65;
  v7 = 2;
  AcquireSRWLockExclusive(this + 65);
  v8 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
  {
    v10 = *((unsigned __int8 *)&v20 + i);
    v8 = 0x100000001B3LL * (v10 ^ v8);
  }
  Ptr = this[60].Ptr;
  v12 = v8 & (__int64)this[63].Ptr;
  v13 = (char *)this[58].Ptr;
  v14 = 2 * v12;
  v15 = (char *)Ptr[v14 + 1];
  if ( v15 == v13 )
  {
LABEL_7:
    v15 = 0LL;
  }
  else
  {
    while ( a2 != *((_DWORD *)v15 + 4) )
    {
      if ( v15 == (char *)Ptr[v14] )
        goto LABEL_7;
      v15 = (char *)*((_QWORD *)v15 + 1);
    }
  }
  if ( !v15 )
    v15 = (char *)this[58].Ptr;
  if ( v15 != v13 )
  {
    v16 = *(__m128i *)(v15 + 40);
    v17 = *(__m128i *)(v15 + 56);
    v18 = *((_DWORD *)v15 + 6);
    if ( v18 == 1 || a2 == LODWORD(this[80].Ptr) )
    {
      if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v17, 12))
        || (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v17, 13))
        || (_mm_cvtsi128_si32(_mm_srli_si128(v16, 8)) & 2) == 0 )
      {
        goto LABEL_18;
      }
      v7 = 0;
    }
    else if ( v18 == 5
           && (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v17, 12))
           && (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v17, 13)) )
    {
LABEL_18:
      v7 = 1;
    }
  }
  *(_DWORD *)a3 = v7;
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  return 0LL;
}
