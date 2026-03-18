/*
 * XREFs of ?ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ @ 0x180094F18
 * Callers:
 *     ?ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_ADDPRIMITIVES@@@Z @ 0x180094D3C (-ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_ADD.c)
 * Callees:
 *     ?TraceInvalidBatches@CPrimitiveGroup@@AEBAXPEBX_K@Z @ 0x1800951B0 (-TraceInvalidBatches@CPrimitiveGroup@@AEBAXPEBX_K@Z.c)
 *     ?BuildHeatMap@CPrimitiveGroup@@AEAAJXZ @ 0x18027DA14 (-BuildHeatMap@CPrimitiveGroup@@AEAAJXZ.c)
 *     ?ClearPrimitiveContent@CPrimitiveGroup@@AEAAXXZ @ 0x18027DBC0 (-ClearPrimitiveContent@CPrimitiveGroup@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CPrimitiveGroup::ResolveSharedMemoryBuffer(CPrimitiveGroup *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  __int128 *v8; // rsi
  __int128 v9; // xmm7
  __int64 v10; // r10
  __int64 v11; // xmm9_8
  __int128 v12; // xmm8
  __m128 v13; // xmm6
  __int64 v14; // r8
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rbp
  __int64 v18; // r12
  unsigned __int64 v19; // rcx
  char *v20; // r13
  int v21; // [rsp+E0h] [rbp+8h]

  v2 = *((_QWORD *)this + 11);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 11) = 0LL;
  }
  v3 = *((_QWORD *)this + 12);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    *((_QWORD *)this + 12) = 0LL;
  }
  v4 = *((_QWORD *)this + 31);
  v5 = *((unsigned int *)this + 65);
  *((_BYTE *)this + 104) = 0;
  v6 = *(unsigned int *)(v4 + 80);
  if ( v5 >= v6 )
    goto LABEL_10;
  if ( *((unsigned int *)this + 64) > v6 - v5 )
    goto LABEL_10;
  v7 = *(_QWORD *)(v4 + 88);
  if ( !v7 )
    goto LABEL_10;
  v8 = (__int128 *)(v5 + v7);
  if ( !(v5 + v7) )
    goto LABEL_10;
  v9 = v8[1];
  v10 = *((_QWORD *)v8 + 3);
  v11 = *((_QWORD *)v8 + 6);
  v12 = *v8;
  v21 = *((_DWORD *)v8 + 14);
  v13 = (__m128)v8[2];
  v14 = HIDWORD(*((_QWORD *)v8 + 1));
  v15 = DWORD1(v9);
  v16 = (unsigned int)v9 + 60LL;
  v17 = v14 + v16;
  v18 = HIDWORD(*((_QWORD *)v8 + 1));
  if ( v14 + v16 >= v16
    && v15 + v17 >= v17
    && *((unsigned int *)this + 64) >= v15 + v17
    && (v19 = (unsigned int)v14 / 0x94, v20 = (char *)(v19 + (unsigned int)v10), (unsigned __int64)v20 >= v19)
    && (HIDWORD(v10) == -1 || (unsigned int)v14 >= 0x94 && HIDWORD(v10) <= (unsigned int)(v14 - 148)) )
  {
    CPrimitiveGroup::TraceInvalidBatches((CPrimitiveGroup *)v19, (char *)v8 + 60, (unsigned int)v9);
    *((_QWORD *)this + 42) = (unsigned int)v9;
    *(_OWORD *)((char *)this + 264) = v12;
    *((_QWORD *)this + 43) = (char *)v8 + v16;
    *(_OWORD *)((char *)this + 280) = v9;
    *((_QWORD *)this + 45) = (char *)v8 + v17;
    *(__m128 *)((char *)this + 296) = v13;
    *((_QWORD *)this + 41) = (char *)v8 + 60;
    *((_DWORD *)this + 99) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v13, 4));
    *((_QWORD *)this + 39) = v11;
    *((_BYTE *)this + 400) = (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128((__m128i)v13, 8)) != 0;
    *((_DWORD *)this + 95) = _mm_shuffle_ps(v13, v13, 255).m128_u32[0];
    *((_QWORD *)this + 48) = v11;
    *((_DWORD *)this + 80) = v21;
    *((_QWORD *)this + 44) = v18;
    *((_QWORD *)this + 46) = v15;
    *((_DWORD *)this + 94) = (_DWORD)v20;
    *((_DWORD *)this + 98) = v21;
  }
  else
  {
LABEL_10:
    CPrimitiveGroup::ClearPrimitiveContent(this);
  }
  if ( *((_BYTE *)this + 401) )
    CPrimitiveGroup::BuildHeatMap(this);
}
