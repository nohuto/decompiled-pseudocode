/*
 * XREFs of ??$_Insertion_sort_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAPEAVString@Internal@Windows@@QEAV123@0U?$less@X@0@@Z @ 0x18004DACC
 * Callers:
 *     ??$_Sort_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@0_JU?$less@X@0@@Z @ 0x18004D9C8 (--$_Sort_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YAXPEAVString@Internal@Wind.c)
 * Callees:
 *     ?Release@String@Internal@Windows@@QEAAXXZ @ 0x18004D95C (-Release@String@Internal@Windows@@QEAAXXZ.c)
 *     ??$_Move_backward_unchecked@PEAVString@Internal@Windows@@PEAV123@@std@@YAPEAVString@Internal@Windows@@PEAV123@00@Z @ 0x1802BB690 (--$_Move_backward_unchecked@PEAVString@Internal@Windows@@PEAV123@@std@@YAPEAVString@Internal@Win.c)
 */

Windows::Internal::String *__fastcall std::_Insertion_sort_unchecked<Windows::Internal::String *,std::less<void>>(
        HSTRING *this,
        Windows::Internal::String *a2,
        char a3)
{
  HSTRING *i; // rsi
  HSTRING v7; // rbx
  HSTRING v8; // rdx
  HSTRING *v9; // r15
  HSTRING *j; // rdi
  HSTRING v11; // rcx
  INT32 result; // [rsp+50h] [rbp+18h] BYREF

  LOBYTE(result) = a3;
  if ( this != (HSTRING *)a2 )
  {
    for ( i = this + 1; i != (HSTRING *)a2; ++i )
    {
      v7 = *i;
      *i = 0LL;
      v8 = *this;
      v9 = i;
      result = 0;
      WindowsCompareStringOrdinal(v7, v8, &result);
      if ( result == -1 )
      {
        std::_Move_backward_unchecked<Windows::Internal::String *,Windows::Internal::String *>(this, i, i + 1);
        Windows::Internal::String::Release(this);
        *this = v7;
      }
      else
      {
        for ( j = i; ; *j = 0LL )
        {
          --j;
          result = 0;
          WindowsCompareStringOrdinal(v7, *j, &result);
          v11 = *v9;
          if ( result != -1 )
            break;
          if ( v11 )
          {
            WindowsDeleteString(v11);
            *v9 = 0LL;
          }
          *v9 = *j;
          v9 = j;
        }
        if ( v11 )
          WindowsDeleteString(v11);
        *v9 = v7;
      }
    }
  }
  return a2;
}
