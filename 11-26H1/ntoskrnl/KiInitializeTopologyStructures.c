/*
 * XREFs of KiInitializeTopologyStructures @ 0x140BFCBB4
 * Callers:
 *     KiInitializeKernel @ 0x140BFC190 (KiInitializeKernel.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     RtlCountSetBitsAffinityEx @ 0x140253280 (RtlCountSetBitsAffinityEx.c)
 *     KeGetProcessorNode @ 0x14047B6CC (KeGetProcessorNode.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KiInitializeTopologyStructures(__int64 BugCheckParameter1)
{
  unsigned int v1; // r15d
  __int64 v3; // r9
  __int64 v5; // rax
  int v6; // ecx
  int v7; // ecx
  __int64 v8; // r10
  __int64 v9; // r8
  _DWORD *v10; // rdx
  int v11; // ecx
  int v12; // eax
  __int64 v13; // rsi
  __int64 v14; // r14
  _QWORD *v15; // rcx
  unsigned __int16 *v16; // rbx
  unsigned int v17; // r13d
  __int64 v18; // r15
  __int64 v19; // rsi
  __int64 v20; // r8
  int v21; // r12d
  unsigned __int64 v22; // r14
  int v23; // edx
  __int64 ProcessorNode; // rax
  __int64 v25; // rdx
  unsigned __int16 *v26; // rcx
  unsigned __int16 *v27; // rbx
  unsigned int v28; // eax
  _QWORD *v29; // rcx
  int v30; // r9d
  unsigned int *v31; // r11
  unsigned __int16 **v32; // r10
  unsigned int v33; // eax
  __int64 result; // rax
  _DWORD *v35; // r12
  __int64 v36; // r8
  ULONG_PTR v37; // rdi
  __int64 v38; // r9
  _DWORD *v39; // rdx
  __int64 v40; // rcx
  int v41; // [rsp+30h] [rbp-D0h]
  int v42; // [rsp+34h] [rbp-CCh]
  unsigned int v43; // [rsp+38h] [rbp-C8h]
  int v44; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD BugCheckParameter3[5]; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v46; // [rsp+58h] [rbp-A8h]
  _DWORD *v47; // [rsp+60h] [rbp-A0h]
  __int128 v48; // [rsp+68h] [rbp-98h] BYREF
  __int64 v49; // [rsp+78h] [rbp-88h]
  __int64 v50; // [rsp+80h] [rbp-80h]
  __int64 v51; // [rsp+88h] [rbp-78h]
  __int64 v52; // [rsp+90h] [rbp-70h]
  __int64 v53; // [rsp+98h] [rbp-68h]
  _QWORD v54[2]; // [rsp+A0h] [rbp-60h]
  __int128 v55; // [rsp+B0h] [rbp-50h]
  __int64 v56; // [rsp+C0h] [rbp-40h]
  __int128 v57; // [rsp+C8h] [rbp-38h]
  __int64 v58; // [rsp+D8h] [rbp-28h]
  __int64 v59; // [rsp+E0h] [rbp-20h]
  __int64 v60; // [rsp+E8h] [rbp-18h]
  __int64 v61; // [rsp+F0h] [rbp-10h]
  __int64 v62; // [rsp+F8h] [rbp-8h]
  _QWORD v63[2]; // [rsp+100h] [rbp+0h]
  __int128 v64; // [rsp+110h] [rbp+10h]
  __int64 v65; // [rsp+120h] [rbp+20h]
  _DWORD v66[6]; // [rsp+128h] [rbp+28h]
  _OWORD v67[3]; // [rsp+140h] [rbp+40h] BYREF

  v1 = *(_DWORD *)(BugCheckParameter1 + 36);
  v42 = *(_DWORD *)(BugCheckParameter1 + 212);
  v47 = (_DWORD *)(BugCheckParameter1 + 36);
  v49 = BugCheckParameter1 + 40784;
  v43 = v1;
  v50 = BugCheckParameter1 + 40192;
  v3 = 6LL;
  v53 = 0LL;
  v51 = BugCheckParameter1 + 35920;
  v56 = 0LL;
  v52 = BugCheckParameter1 + 47424;
  v54[0] = BugCheckParameter1 + 36512;
  v5 = BugCheckParameter1 + 36536;
  v6 = *(_DWORD *)(BugCheckParameter1 + 164);
  v54[1] = v5;
  BugCheckParameter3[1] = *(_DWORD *)(BugCheckParameter1 + 40716);
  LODWORD(v5) = *(_DWORD *)(BugCheckParameter1 + 40712) * v6;
  BugCheckParameter3[0] = v6;
  v7 = *(_DWORD *)(BugCheckParameter1 + 160) * v6;
  v48 = 0LL;
  v44 = 1;
  BugCheckParameter3[2] = v5;
  BugCheckParameter3[4] = *(_DWORD *)(BugCheckParameter1 + 47944);
  v8 = BugCheckParameter1 - (_QWORD)&v44;
  BugCheckParameter3[3] = v7;
  v9 = 0LL;
  v55 = 0LL;
  do
  {
    v10 = &BugCheckParameter3[v9 - 1];
    v11 = ~(BugCheckParameter3[v9 - 1] - 1);
    v12 = v11 & *(_DWORD *)(BugCheckParameter1 + 212);
    v66[v9++] = v11;
    *(_DWORD *)((char *)v10 + v8 + 36440) = v12;
    --v3;
  }
  while ( v3 );
  v13 = 0LL;
  v14 = 5LL;
  do
  {
    v15 = (_QWORD *)v54[v13];
    if ( v15 )
      *v15 = *(_QWORD *)(BugCheckParameter1 + 200);
    v16 = *(unsigned __int16 **)((char *)&v48 + v13 * 8 + 8);
    if ( v16 )
    {
      *(_QWORD *)v16 = 2097153LL;
      memset_0(v16 + 4, 0, 0x100uLL);
      KeAddProcessorAffinityEx(v16, v1);
    }
    ++v13;
    --v14;
  }
  while ( v14 );
  v17 = v1 != 0 ? KeNumberProcessors_0 : 0;
  v18 = 0LL;
  memset(v67, 0, sizeof(v67));
  while ( (unsigned int)v18 < v17 )
  {
    v62 = 0LL;
    v65 = 0LL;
    v19 = KiProcessorBlock[v18];
    v20 = 0LL;
    v57 = 0LL;
    v21 = 1;
    v22 = 0LL;
    v64 = 0LL;
    v23 = *(_DWORD *)(v19 + 212);
    v58 = v19 + 40784;
    v59 = v19 + 40192;
    v60 = v19 + 35920;
    v61 = v19 + 47424;
    v63[0] = v19 + 36512;
    v63[1] = v19 + 36536;
    v41 = v23;
    while ( 1 )
    {
      v46 = v20;
      if ( v21 >= 6 )
        break;
      if ( (v23 & *(_DWORD *)((char *)&v66[1] + v20)) == (v42 & *(_DWORD *)((char *)&v66[1] + v20)) )
      {
        if ( !*(_QWORD *)((char *)v67 + v22 + 8) )
        {
          KeGetProcessorNode(BugCheckParameter1);
          ProcessorNode = KeGetProcessorNode(v19);
          if ( ProcessorNode == v25 )
            *(_QWORD *)((char *)v67 + v22 + 8) = v19;
        }
        v26 = *(unsigned __int16 **)((char *)&v48 + v22 + 8);
        if ( v26 )
        {
          KeAddProcessorAffinityEx(v26, v18);
          v27 = *(unsigned __int16 **)((char *)&v57 + v22 + 8);
          KeAddProcessorAffinityEx(v27, v43);
          v28 = RtlCountSetBitsAffinityEx(v27);
          v20 = v46;
          if ( v28 > *(_DWORD *)((char *)BugCheckParameter3 + v46) )
            KeBugCheckEx(0x3Eu, v19, v28, *(unsigned int *)((char *)BugCheckParameter3 + v46), v21);
        }
        v29 = (_QWORD *)v54[v22 / 8];
        v23 = v41;
        if ( v29 )
        {
          if ( *(_QWORD *)(BugCheckParameter1 + 192) == *(_QWORD *)(v19 + 192) )
          {
            *v29 |= *(_QWORD *)(v19 + 200);
            *(_QWORD *)v63[v22 / 8] |= *(_QWORD *)(BugCheckParameter1 + 200);
          }
        }
      }
      ++v21;
      v20 += 4LL;
      v22 += 8LL;
    }
    v18 = (unsigned int)(v18 + 1);
  }
  v30 = 1;
  v31 = BugCheckParameter3;
  v32 = (unsigned __int16 **)&v48 + 1;
  while ( v30 < 6 )
  {
    if ( *v32 )
    {
      v33 = RtlCountSetBitsAffinityEx(*v32);
      if ( v33 > *v31 )
        KeBugCheckEx(0x3Eu, BugCheckParameter1, v33, *v31, v30);
    }
    ++v30;
    ++v32;
    ++v31;
  }
  result = KeGetProcessorNode(BugCheckParameter1);
  v35 = v47;
  v36 = 0LL;
  v37 = BugCheckParameter1 - result + 47348;
  v38 = 47348 - result;
  v39 = (_DWORD *)(result + 52);
  do
  {
    v40 = *((_QWORD *)v67 + v36);
    if ( *v35 )
    {
      if ( v40 )
      {
        result = (__int64)v39 + v38;
        *(_DWORD *)((char *)v39 + v37) = *(_DWORD *)((char *)v39 + v38 + v40);
      }
      else
      {
        result = (unsigned int)*v39;
        *(_DWORD *)((char *)v39 + v37) = result;
        ++*v39;
      }
    }
    ++v36;
    ++v39;
  }
  while ( v36 < 6 );
  return result;
}
