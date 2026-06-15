/*
 * XREFs of sub_140083CA0 @ 0x140083CA0
 * Callers:
 *     sub_140081650 @ 0x140081650 (sub_140081650.c)
 *     sub_140081AE0 @ 0x140081AE0 (sub_140081AE0.c)
 *     sub_140082A00 @ 0x140082A00 (sub_140082A00.c)
 *     sub_140082DA0 @ 0x140082DA0 (sub_140082DA0.c)
 *     sub_140084920 @ 0x140084920 (sub_140084920.c)
 *     sub_140084B80 @ 0x140084B80 (sub_140084B80.c)
 * Callees:
 *     sub_14000E018 @ 0x14000E018 (sub_14000E018.c)
 *     sub_14000E3CC @ 0x14000E3CC (sub_14000E3CC.c)
 *     sub_140083E64 @ 0x140083E64 (sub_140083E64.c)
 */

__int64 __fastcall sub_140083CA0(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  ATL::CAtlException *v7; // rbx
  ATL::CAtlException *v8; // [rsp+20h] [rbp-18h] BYREF

  try
  {
    v4 = 0;
    if ( *(_QWORD *)(a2 + 160) == a1 )
    {
      if ( !sub_140083E64(a1, *(_QWORD *)(a2 + 16)) )
        sub_14000E3CC(a1 + 232, a2);
    }
    else
    {
      sub_14000E018(a1 + 232, a2);
    }
  }
  catch ( ATL::CAtlException *v8 )
  {
    v7 = v8;
    if ( *(_DWORD *)v8 == -1073741571 )
      o__resetstkoflw();
    return *(unsigned int *)v7;
  }
  return v4;
}
