/*
 * XREFs of ?GetMonitorHashsForPath@CCD_TOPOLOGY@@QEAAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z @ 0x140348870
 * Callers:
 *     ?DxgkGetMonitorHash@@YAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z @ 0x140339B80 (-DxgkGetMonitorHash@@YAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?CcdCreateMd5Checksum@@YAJPEBEIPEAE@Z @ 0x14033C33C (-CcdCreateMd5Checksum@@YAJPEBEIPEAE@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x14033F4C8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x140348B08 (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::GetMonitorHashsForPath(
        CCD_TOPOLOGY *this,
        struct _LUID a2,
        unsigned int a3,
        unsigned int *a4,
        struct D3DKMT_HASH *a5)
{
  unsigned int v5; // r12d
  __int64 HighPart; // rsi
  unsigned __int16 v8; // cx
  unsigned int v9; // edi
  __int64 v10; // r14
  DWORD LowPart; // ebx
  __int64 v13; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  int v15; // r13d
  unsigned int v16; // esi
  unsigned int v17; // ebx
  unsigned int v18; // edi
  __int64 v19; // rax
  unsigned __int16 v20; // cx
  void *v21; // rbx
  struct D3DKMT_HASH *v22; // r14
  __int64 v23; // rax
  unsigned __int16 v24; // cx
  const struct _LUID *v25; // rax
  const struct _LUID *v26; // rdi
  unsigned int v27; // edx
  const struct _LUID *v28; // r12
  int v29; // eax
  unsigned int v30; // r15d
  int Md5Checksum; // eax
  __int64 result; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v33; // rax
  int v34; // ecx
  unsigned int v35; // eax
  unsigned __int16 v36; // [rsp+70h] [rbp+8h] BYREF
  struct _LUID v37; // [rsp+78h] [rbp+10h]

  v37 = a2;
  v5 = *a4;
  HighPart = a2.HighPart;
  v8 = 0;
  v9 = 0;
  v10 = a3;
  LowPart = a2.LowPart;
  while ( 1 )
  {
    v13 = *((_QWORD *)this + 8);
    if ( v13 )
      v8 = *(_WORD *)(v13 + 20);
    if ( v9 >= v8 )
      goto LABEL_24;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, v9);
    if ( *((_DWORD *)PathDescriptor + 6) == (_DWORD)v10
      && *((_DWORD *)PathDescriptor + 4) == LowPart
      && *((_DWORD *)PathDescriptor + 5) == (_DWORD)HighPart )
    {
      break;
    }
    ++v9;
    v8 = 0;
  }
  v15 = *((_DWORD *)PathDescriptor + 46);
  if ( v15 == -1 )
  {
LABEL_24:
    WdLogSingleEntry3(3LL, HighPart, LowPart, v10);
    result = 3221225473LL;
    WdLogGlobalForLineNumber = 6029;
    return result;
  }
  v16 = 0;
  v17 = 0;
  v18 = 0;
  while ( 1 )
  {
    v19 = *((_QWORD *)this + 8);
    v20 = v19 ? *(_WORD *)(v19 + 20) : 0;
    if ( v18 >= v20 )
      break;
    v33 = CCD_TOPOLOGY::GetPathDescriptor(this, v18++);
    v34 = *((_DWORD *)v33 + 46);
    v35 = v17 + 1;
    if ( v34 != v15 )
      v35 = v17;
    v17 = v35;
  }
  *a4 = v17;
  if ( v17 > v5 )
    return 3221225507LL;
  v21 = (void *)operator new[](0x8002uLL, 0x63644356u, 256LL);
  if ( !v21 )
  {
    WdLogSingleEntry0(6LL);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 6058;
    return result;
  }
  v22 = a5;
  while ( 1 )
  {
    v23 = *((_QWORD *)this + 8);
    if ( v23 )
      v24 = *(_WORD *)(v23 + 20);
    else
      v24 = 0;
    if ( v16 >= v24 )
    {
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v21);
      return 0LL;
    }
    v25 = (const struct _LUID *)CCD_TOPOLOGY::GetPathDescriptor(this, v16);
    v26 = v25;
    if ( v25[23].LowPart == v15 )
      break;
LABEL_23:
    ++v16;
  }
  v27 = v25[3].HighPart;
  v28 = v25 + 2;
  v36 = 0;
  v29 = CCD_TOPOLOGY::_QueryMonitorIdStr(v25 + 2, v27, (unsigned __int16 *)v21, 0x4001u, &v36);
  v30 = v29;
  if ( v29 < 0 )
  {
    WdLogSingleEntry4(2LL, v26[2].HighPart, v28->LowPart, (unsigned int)v26[3].HighPart, v29);
    WdLogGlobalForLineNumber = 6077;
    goto LABEL_32;
  }
  Md5Checksum = CcdCreateMd5Checksum((const unsigned __int8 *)v21, 2 * (unsigned int)v36, (unsigned __int8 *)v22 + 4);
  v30 = Md5Checksum;
  if ( Md5Checksum >= 0 )
  {
    *(_DWORD *)v22 = 1;
    v22 = (struct D3DKMT_HASH *)((char *)v22 + 20);
    goto LABEL_23;
  }
  WdLogSingleEntry4(2LL, v26[2].HighPart, v28->LowPart, (unsigned int)v26[3].HighPart, Md5Checksum);
  WdLogGlobalForLineNumber = 6085;
LABEL_32:
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v21);
  return v30;
}
