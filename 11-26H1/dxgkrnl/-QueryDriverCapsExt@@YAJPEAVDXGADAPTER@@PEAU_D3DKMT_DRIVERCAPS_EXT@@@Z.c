/*
 * XREFs of ?QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z @ 0x14019206C
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x14039A290 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

__int64 __fastcall QueryDriverCapsExt(struct DXGADAPTER *a1, struct _D3DKMT_DRIVERCAPS_EXT *a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v10; // rdx
  UINT Value; // eax
  UINT v12; // ecx
  UINT v13; // eax
  _BYTE v14[144]; // [rsp+20h] [rbp-A8h] BYREF

  v2 = 0;
  if ( !a1 || !a2 )
    return 3221225485LL;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v14, a1, 0LL);
  v5 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v14, 0LL);
  if ( v5 >= 0 )
  {
    v10 = *((_QWORD *)a1 + 395);
    Value = a2->Value;
    if ( v10 )
    {
      v12 = Value ^ ((unsigned __int8)Value ^ (unsigned __int8)(*(_DWORD *)(v10 + 24) >> 1)) & 1;
      a2->Value = v12;
      v13 = v12 ^ ((unsigned __int8)v12 ^ (unsigned __int8)(*(_DWORD *)(v10 + 24) >> 5)) & 2;
    }
    else
    {
      v13 = Value & 0xFFFFFFFC;
    }
    a2->Value = v13;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v14);
    return 0LL;
  }
  else
  {
    if ( v5 == -1073741130 )
    {
      v8 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6);
      v8[3] = a1;
      v8[4] = *((int *)a1 + 104);
      v8[5] = *((unsigned int *)a1 + 103);
      WdLogGlobalForLineNumber = 2517;
    }
    else
    {
      v2 = v5;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v14);
    return v2;
  }
}
