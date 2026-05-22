/*
 * XREFs of ?AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801ADF60
 * Callers:
 *     ?RegisterControllerClient@EdgyConnection@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801ACBEC (-RegisterControllerClient@EdgyConnection@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800C7E80 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??1Edge@@QEAA@XZ @ 0x1801AC454 (--1Edge@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@AEBVEdge@@@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@AEAAPEAVEdge@@QEAV2@AEBV2@@Z @ 0x1801AD8B8 (--$_Emplace_reallocate@AEBVEdge@@@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@AEAAPEAVEdge@@.c)
 *     ??0Edge@@QEAA@AEBV0@@Z @ 0x1801ADCB0 (--0Edge@@QEAA@AEBV0@@Z.c)
 *     ?FindEdge@Edges@@AEBAHPEBG@Z @ 0x1801AE248 (-FindEdge@Edges@@AEBAHPEBG@Z.c)
 *     ?Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801AEFDC (-Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Edges::AddOrUpdate(Edges *this, const unsigned __int16 *a2, struct EdgyControllerClientProxy *a3)
{
  unsigned int v6; // edi
  int Edge; // eax
  __int64 v9; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v10[32]; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v11; // [rsp+58h] [rbp-80h]
  int v12; // [rsp+60h] [rbp-78h]
  __int128 v13; // [rsp+64h] [rbp-74h]
  __int128 v14; // [rsp+74h] [rbp-64h]
  __int64 v15; // [rsp+84h] [rbp-54h]
  __int64 v16; // [rsp+8Ch] [rbp-4Ch]
  __int64 v17; // [rsp+98h] [rbp-40h]
  __int128 v18; // [rsp+A0h] [rbp-38h]

  v6 = 0;
  Edge = Edges::FindEdge(this, a2);
  if ( Edge < 0 )
  {
    v9 = 0LL;
    std::wstring::wstring((__int64)v10);
    v11 = 0LL;
    v12 = 0;
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    Edge::Set((Edge *)&v9, a2, a3);
    try
    {
      if ( *((_QWORD *)this + 1) == *((_QWORD *)this + 2) )
      {
        std::vector<Edge>::_Emplace_reallocate<Edge const &>(
          (__int64 *)this,
          *((_QWORD *)this + 1),
          (const struct Edge *)&v9);
      }
      else
      {
        Edge::Edge(*((Edge **)this + 1), (const struct Edge *)&v9);
        *((_QWORD *)this + 1) += 128LL;
      }
    }
    catch ( ... )
    {
      v6 = -2147024882;
    }
    Edge::~Edge((Edge *)&v9);
  }
  else
  {
    Edge::Set((Edge *)(*(_QWORD *)this + ((__int64)Edge << 7)), a2, a3);
  }
  return v6;
}
