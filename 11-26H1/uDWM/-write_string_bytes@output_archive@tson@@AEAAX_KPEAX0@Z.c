/*
 * XREFs of ?write_string_bytes@output_archive@tson@@AEAAX_KPEAX0@Z @ 0x18005D48C
 * Callers:
 *     ??$?RAEAUansistring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUansistring_tag@1@@Z @ 0x1800D193C (--$-RAEAUansistring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUansistring_tag@1@@Z.c)
 *     ??$?RAEAUstring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUstring_tag@1@@Z @ 0x1800D199C (--$-RAEAUstring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUstring_tag@1@@Z.c)
 *     ??$save_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tson@@YAXAEAVoutput_archive@0@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@Z @ 0x1800D245C (--$save_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEADP6AXPEAX@Z$1-CoTaskMemF.c)
 * Callees:
 *     memcpy_s_0 @ 0x18005D5C0 (memcpy_s_0.c)
 *     ?reserve@write_buffer@tson@@AEAA_N_K@Z @ 0x18005D65C (-reserve@write_buffer@tson@@AEAA_N_K@Z.c)
 *     ??$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z @ 0x18008AE90 (--$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z.c)
 */

void __fastcall tson::output_archive::write_string_bytes(tson::output_archive *this, __int64 a2, void *a3, rsize_t a4)
{
  unsigned __int64 v4; // rdx
  __int64 v8; // rdi
  char v9; // bp
  __int64 v10; // rbx
  __int64 v11; // rcx
  char v12; // [rsp+40h] [rbp+8h] BYREF
  char v13; // [rsp+48h] [rbp+10h] BYREF

  v4 = a2 + 1;
  if ( v4 > 0x7F )
  {
    if ( v4 > 0x7FFF && *((int *)this + 34) >= 0 )
      *((_DWORD *)this + 34) = -2147483637;
    v11 = *((_QWORD *)this + 18);
    v13 = v4;
    v12 = (unsigned __int16)(v4 | 0x8000) >> 8;
    tson::write_buffer::push_back<unsigned char>(v11, &v12);
    tson::write_buffer::push_back<unsigned char>(*((_QWORD *)this + 18), &v13);
  }
  else
  {
    v8 = *((_QWORD *)this + 18);
    v9 = a3 != 0LL ? v4 : 0;
    if ( *(_QWORD *)(v8 + 2072) < *(_QWORD *)(v8 + 2080)
      || tson::write_buffer::reserve(*((tson::write_buffer **)this + 18), 1uLL) )
    {
      *(_BYTE *)(*(_QWORD *)(v8 + 2072))++ = v9;
    }
  }
  v10 = *((_QWORD *)this + 18);
  if ( *(_QWORD *)(v10 + 2080) - *(_QWORD *)(v10 + 2072) >= a4
    || tson::write_buffer::reserve((tson::write_buffer *)v10, a4) )
  {
    memcpy_s_0(*(void *const *)(v10 + 2072), *(_QWORD *)(v10 + 2080) - *(_QWORD *)(v10 + 2072), a3, a4);
    *(_QWORD *)(v10 + 2072) += a4;
  }
}
