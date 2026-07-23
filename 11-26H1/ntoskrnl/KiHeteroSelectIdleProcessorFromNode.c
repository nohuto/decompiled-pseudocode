/*
 * XREFs of KiHeteroSelectIdleProcessorFromNode @ 0x140236710
 * Callers:
 *     KiDeferredReadySingleThread @ 0x140233180 (KiDeferredReadySingleThread.c)
 * Callees:
 *     KiHeteroSelectIdleProcessorFromSubNode @ 0x14040C320 (KiHeteroSelectIdleProcessorFromSubNode.c)
 *     KiIsQosGroupingClass @ 0x14044FAD0 (KiIsQosGroupingClass.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140735C50 (_alloca_probe.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KiHeteroSelectIdleProcessorFromNode(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  size_t v5; // rdi
  __int64 result; // rax
  int v9; // edx
  int v10; // ebx
  __int64 v11; // rax
  size_t v12; // r13
  void *v13; // rsp
  __int64 v14; // rax
  int *v15; // r15
  void *v16; // rsp
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r12
  int *v20; // rax
  unsigned int v21; // r15d
  unsigned __int8 v22; // si
  unsigned int v23; // ecx
  unsigned int v24; // r8d
  unsigned int v25; // r11d
  int *v26; // r10
  unsigned __int8 v27; // r9
  __int64 v28; // rsi
  int v29; // [rsp+30h] [rbp+0h] BYREF
  unsigned int v30; // [rsp+34h] [rbp+4h]
  int *v31; // [rsp+38h] [rbp+8h]
  int *v32; // [rsp+40h] [rbp+10h]
  __int64 v33; // [rsp+48h] [rbp+18h]
  __int64 v34; // [rsp+50h] [rbp+20h]
  __int64 v35; // [rsp+58h] [rbp+28h]
  __int64 v36; // [rsp+60h] [rbp+30h]

  v5 = *(unsigned int *)(a2 + 48);
  v34 = a4;
  v35 = a3;
  v33 = a2;
  v36 = a1;
  if ( !(_DWORD)v5 )
    return 0LL;
  if ( (_DWORD)v5 != 1 )
  {
    v9 = 8;
    v10 = (a5 == -4 || !(unsigned __int8)KiIsQosGroupingClass(*(unsigned int *)(a5 + 4)))
       && (KiVelocityFlags & 0x800000) != 0
       && ((unsigned __int8)v9 & *(_BYTE *)(a2 + 10)) != 0;
    v11 = v5 + 15;
    v12 = v5;
    if ( v5 + 15 < v5 )
      v11 = 0xFFFFFFFFFFFFFF0LL;
    v13 = alloca(v11 & 0xFFFFFFFFFFFFFFF0uLL);
    v14 = v5 + 15;
    v15 = &v29;
    v31 = &v29;
    if ( v5 + 15 < v5 )
      v14 = 0xFFFFFFFFFFFFFF0LL;
    v16 = alloca(v14 & 0xFFFFFFFFFFFFFFF0uLL);
    v17 = *(_DWORD *)(a5 + 12);
    v32 = &v29;
    if ( v17 != 3 && v17 != 4 )
      v9 = 0;
    RtlCopyVolatileMemory(
      &v29,
      (const void *)(*(_QWORD *)(a2 + 80) + *(_DWORD *)(a2 + 40) * ((unsigned int)*(unsigned __int8 *)(a5 + 16) + v9)),
      v5);
    v18 = *(_QWORD *)(a3 + 192);
    v30 = *(_DWORD *)(a3 + 36);
    if ( *(_WORD *)(v18 + 138) == *(_WORD *)a2 )
      v29 = *(unsigned __int16 *)(v18 + 142);
    else
      v29 = 0xFFFF;
    v19 = a5;
    while ( 2 )
    {
      memset_0(v15, 0, v12);
      v20 = v31;
      v21 = 0;
LABEL_25:
      if ( v21 < (unsigned int)v5 )
      {
        v22 = 0;
        v23 = 0;
        v24 = 0;
        v25 = 0xFFFF;
        v26 = v32;
        while ( 1 )
        {
          if ( !*((_BYTE *)v26 + (char *)v20 - (char *)v32) )
          {
            v27 = *(_BYTE *)v26;
            if ( v25 == 0xFFFF || v27 > v22 )
            {
              v23 = 1;
            }
            else
            {
              if ( v27 != v22 )
                goto LABEL_38;
              ++v23;
              if ( v24 != v29 && (v25 == v29 || v30 % v23) )
                goto LABEL_38;
            }
            v25 = v24;
            v22 = *(_BYTE *)v26;
          }
LABEL_38:
          ++v24;
          v26 = (int *)((char *)v26 + 1);
          if ( v24 >= (unsigned int)v5 )
          {
            v12 = v5;
            v19 = a5;
            v28 = v25;
            result = KiHeteroSelectIdleProcessorFromSubNode(
                       v36,
                       *(_QWORD *)(*(_QWORD *)(v33 + 32) + 8LL * v25),
                       v35,
                       v34,
                       a5,
                       v10);
            if ( result )
              return result;
            v20 = v31;
            ++v21;
            *((_BYTE *)v31 + v28) = 1;
            goto LABEL_25;
          }
        }
      }
      if ( v10 > *(_DWORD *)(v19 + 20) )
      {
        v15 = v31;
        --v10;
        continue;
      }
      return 0LL;
    }
  }
  return KiHeteroSelectIdleProcessorFromSubNode(a1, **(_QWORD **)(a2 + 32), a3, a4, a5, 0);
}
