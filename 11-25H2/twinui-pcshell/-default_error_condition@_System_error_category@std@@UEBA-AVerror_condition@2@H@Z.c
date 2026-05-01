/*
 * XREFs of ?default_error_condition@_System_error_category@std@@UEBA?AVerror_condition@2@H@Z @ 0x180319100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_System_error_category::default_error_condition(__int64 a1, __int64 a2, int a3)
{
  int v5; // eax
  void ***v6; // rax

  if ( a3 )
  {
    v5 = std::_Winerror_map(a3);
    if ( v5 )
    {
      *(_DWORD *)a2 = v5;
      v6 = &`std::_Immortalize_memcpy_image<std::_Generic_error_category>'::`2'::_Static;
    }
    else
    {
      *(_DWORD *)a2 = a3;
      v6 = &`std::_Immortalize_memcpy_image<std::_System_error_category>'::`2'::_Static;
    }
    *(_QWORD *)(a2 + 8) = v6;
  }
  else
  {
    *(_DWORD *)a2 = 0;
    *(_QWORD *)(a2 + 8) = &`std::_Immortalize_memcpy_image<std::_Generic_error_category>'::`2'::_Static;
  }
  return a2;
}
