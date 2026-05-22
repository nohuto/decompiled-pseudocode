/*
 * XREFs of ?AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801AE078
 * Callers:
 *     ?OnEdgyCompositionUpdateStatic@EdgyConnection@@CAJPEAXPEBXH@Z @ 0x1801ACAA0 (-OnEdgyCompositionUpdateStatic@EdgyConnection@@CAJPEAXPEBXH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800C7E80 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??1Edge@@QEAA@XZ @ 0x1801AC454 (--1Edge@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@AEBVEdge@@@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@AEAAPEAVEdge@@QEAV2@AEBV2@@Z @ 0x1801AD8B8 (--$_Emplace_reallocate@AEBVEdge@@@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@AEAAPEAVEdge@@.c)
 *     ??0Edge@@QEAA@AEBV0@@Z @ 0x1801ADCB0 (--0Edge@@QEAA@AEBV0@@Z.c)
 *     ?FindEdge@Edges@@AEBAHPEBG@Z @ 0x1801AE248 (-FindEdge@Edges@@AEBAHPEBG@Z.c)
 *     ?Set@Edge@@AEAAXPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801AF0A8 (-Set@Edge@@AEAAXPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Edges::AddOrUpdate(Edges *this, const struct EdgyCompositionConfigurationUpdateEx *a2)
{
  unsigned int v4; // edi
  int Edge; // eax
  __int64 v7; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v8[32]; // [rsp+38h] [rbp-90h] BYREF
  __int64 v9; // [rsp+58h] [rbp-70h]
  int v10; // [rsp+60h] [rbp-68h]
  __int128 v11; // [rsp+64h] [rbp-64h]
  __int128 v12; // [rsp+74h] [rbp-54h]
  __int64 v13; // [rsp+84h] [rbp-44h]
  __int64 v14; // [rsp+8Ch] [rbp-3Ch]
  __int64 v15; // [rsp+98h] [rbp-30h]
  __int128 v16; // [rsp+A0h] [rbp-28h]

  v4 = 0;
  Edge = Edges::FindEdge(this, (const unsigned __int16 *)a2 + 12);
  if ( Edge < 0 )
  {
    v7 = 0LL;
    std::wstring::wstring((__int64)v8);
    v9 = 0LL;
    v10 = 0;
    v11 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    Edge::Set((Edge *)&v7, a2);
    try
    {
      if ( *((_QWORD *)this + 1) == *((_QWORD *)this + 2) )
      {
        std::vector<Edge>::_Emplace_reallocate<Edge const &>(
          (__int64 *)this,
          *((_QWORD *)this + 1),
          (const struct Edge *)&v7);
      }
      else
      {
        Edge::Edge(*((Edge **)this + 1), (const struct Edge *)&v7);
        *((_QWORD *)this + 1) += 128LL;
      }
    }
    catch ( ... )
    {
      v4 = -2147024882;
    }
    Edge::~Edge((Edge *)&v7);
  }
  else
  {
    Edge::Set((Edge *)(*(_QWORD *)this + ((__int64)Edge << 7)), a2);
  }
  return v4;
}
