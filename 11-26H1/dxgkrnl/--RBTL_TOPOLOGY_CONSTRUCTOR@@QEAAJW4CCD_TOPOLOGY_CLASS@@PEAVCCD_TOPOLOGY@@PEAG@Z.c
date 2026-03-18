/*
 * XREFs of ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x140337350
 * Callers:
 *     ?GetTopologyForClass@CCD_BTL_FULL@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1401901E0 (-GetTopologyForClass@CCD_BTL_FULL@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 * Callees:
 *     ?_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x14018C814 (-_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x14026C394 (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 *     ?_ConstructExtend@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x14026CA50 (-_ConstructExtend@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x14026CB5C (-_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1402AC310 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@QEAAJXZ @ 0x14033811C (-_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@QEAAJXZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x14033F4C8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x140424A4C (-_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::operator()(
        BTL_TOPOLOGY_CONSTRUCTOR *this,
        int a2,
        CCD_TOPOLOGY *a3,
        unsigned __int16 *a4)
{
  unsigned int v5; // esi
  __int64 v6; // r14
  int v8; // eax
  int v9; // edi
  __m128i *v11; // r13
  unsigned int i; // r12d
  __int64 v13; // rbp
  int v14; // eax
  CCD_TOPOLOGY *v15; // rcx
  __int64 v16; // rcx
  unsigned __int16 v17; // cx
  unsigned __int16 v18; // ax
  __int64 v19; // rax
  unsigned __int16 v20; // ax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  unsigned int v22; // ecx
  __m128i si128; // [rsp+20h] [rbp-48h] BYREF
  int v24; // [rsp+30h] [rbp-38h]
  unsigned int v25; // [rsp+70h] [rbp+8h] BYREF

  *(_QWORD *)this = a3;
  v5 = 0;
  v6 = a2;
  *((_DWORD *)this + 2) = 0;
  CCD_TOPOLOGY::Clear(a3);
  v8 = BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_Query((BTL_TOPOLOGY_CONSTRUCTOR *)((char *)this + 12));
  v9 = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry3(2LL, v8, v6, *(_QWORD *)this);
    WdLogGlobalForLineNumber = 335;
    return (unsigned int)v9;
  }
  v11 = &si128;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v24 = 8;
  v9 = -1073741811;
  v25 = 0;
  for ( i = 0; i < 5; ++i )
  {
    v13 = v11->m128i_i32[0];
    if ( ((unsigned int)v6 & v11->m128i_i32[0]) != (_DWORD)v13 )
      goto LABEL_20;
    switch ( (_DWORD)v13 )
    {
      case 1:
        v14 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructInternal(this);
LABEL_17:
        v9 = v14;
        if ( v14 >= 0 )
          goto LABEL_23;
        goto LABEL_18;
      case 2:
        v14 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructClone(this, 1);
        goto LABEL_17;
      case 4:
        v14 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtend(this, 1);
        goto LABEL_17;
      case 8:
        v14 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExternal(this);
        goto LABEL_17;
      case 0xF:
        v14 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructDefault(this, &v25);
        v5 = v25;
        goto LABEL_17;
    }
    v9 = -1073741811;
LABEL_18:
    if ( (_DWORD)v13 == 15 )
      goto LABEL_22;
    v15 = *(CCD_TOPOLOGY **)this;
    *((_DWORD *)this + 2) = 0;
    CCD_TOPOLOGY::Clear(v15);
    v5 = 0;
    v25 = 0;
    WdLogSingleEntry3(3LL, v9, v13, *(_QWORD *)this);
    WdLogGlobalForLineNumber = 416;
LABEL_20:
    v11 = (__m128i *)((char *)v11 + 4);
  }
  if ( v9 < 0 )
  {
LABEL_22:
    WdLogSingleEntry3(2LL, v9, v6, *(_QWORD *)this);
    WdLogGlobalForLineNumber = 425;
    return (unsigned int)v9;
  }
LABEL_23:
  v16 = *(_QWORD *)(*(_QWORD *)this + 64LL);
  if ( v16 )
    v17 = *(_WORD *)(v16 + 22);
  else
    v17 = 0;
  v18 = *((_WORD *)this + 4);
  if ( v18 <= v17 )
  {
    while ( 1 )
    {
      v19 = *(_QWORD *)(*(_QWORD *)this + 64LL);
      v20 = v19 ? *(_WORD *)(v19 + 20) : 0;
      if ( v5 >= v20 )
        break;
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(*(CCD_TOPOLOGY **)this, v5);
      v22 = v5;
      if ( *((_BYTE *)this + 11) )
        v22 = 0;
      *((_DWORD *)PathDescriptor + 46) = v22 | 0xFE530000;
      *(_QWORD *)PathDescriptor |= 0x4000000000000uLL;
      ++v5;
    }
  }
  else
  {
    if ( a4 )
      *a4 = v18;
    return (unsigned int)-1073741789;
  }
  return (unsigned int)v9;
}
