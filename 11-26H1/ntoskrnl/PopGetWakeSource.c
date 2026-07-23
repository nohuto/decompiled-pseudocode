/*
 * XREFs of PopGetWakeSource @ 0x140B346F8
 * Callers:
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     PopGetCurrentWakeInfos @ 0x1404EB95C (PopGetCurrentWakeInfos.c)
 *     PopDereferenceWakeInfos @ 0x1404F382C (PopDereferenceWakeInfos.c)
 *     PopCopyWakeSource @ 0x1407D280C (PopCopyWakeSource.c)
 *     PopWakeSourceSize @ 0x1407D2AF8 (PopWakeSourceSize.c)
 */

__int64 __fastcall PopGetWakeSource(_DWORD *a1, unsigned int *a2)
{
  unsigned __int64 v2; // rbp
  _DWORD *v3; // r12
  _DWORD *v4; // rsi
  unsigned int CurrentWakeInfos; // eax
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rdi
  unsigned __int64 v9; // r14
  unsigned int v10; // edi
  __int64 *v12; // r10
  __int64 v13; // r11
  __int64 v14; // rbp
  __int64 *v15; // r15
  _DWORD *v16; // r12
  __int64 *v17; // r15
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 *v20; // r9
  __int64 v21; // rcx
  _DWORD *v22; // r13
  _QWORD *v23; // rbx
  _DWORD *v24; // rsi
  _QWORD *v25; // r15
  unsigned __int64 v26; // rbp
  __int64 *v27; // [rsp+30h] [rbp-68h]
  int v28; // [rsp+A0h] [rbp+8h]
  unsigned int v30; // [rsp+B0h] [rbp+18h]
  __int64 *v31; // [rsp+B8h] [rbp+20h] BYREF

  v28 = (int)a1;
  v2 = *a2;
  v3 = a2;
  v31 = 0LL;
  v4 = a1;
  if ( (_DWORD)v2 && !a1 )
    return 3221225485LL;
  KeWaitForSingleObject(&PopWakeSourceAvailable, Executive, 0, 0, 0LL);
  CurrentWakeInfos = PopGetCurrentWakeInfos((__int64 *)&v31);
  v7 = CurrentWakeInfos;
  v30 = CurrentWakeInfos;
  v8 = CurrentWakeInfos;
  v9 = (int)(4 * CurrentWakeInfos + 4);
  if ( CurrentWakeInfos )
  {
    v12 = v31;
    v13 = CurrentWakeInfos;
    do
    {
      v6 = *v12;
      v17 = (__int64 *)(*v12 + 24);
      v18 = *v17;
      v9 = 4 * *(_DWORD *)(*v12 + 40) + 4 + ((v9 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      while ( (__int64 *)v18 != v17 )
      {
        v19 = PopWakeSourceSize(v18);
        v18 = *v20;
        v9 = v19 + ((v9 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      }
      ++v12;
      --v13;
    }
    while ( v13 );
  }
  if ( v9 <= v2 )
  {
    *v4 = v7;
    v14 = (__int64)&v4[v7 + 1];
    if ( (_DWORD)v7 )
    {
      v15 = v31;
      v16 = v4 + 1;
      v27 = v31;
      do
      {
        v21 = *v15;
        v22 = (_DWORD *)((v14 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        *v22 = *(_DWORD *)(*v15 + 40);
        *v16 = ((v14 + 7) & 0xFFFFFFF8) - (_DWORD)v4;
        v14 = (__int64)&v22[*(unsigned int *)(v21 + 40) + 1];
        v23 = *(_QWORD **)(v21 + 24);
        if ( v23 != (_QWORD *)(v21 + 24) )
        {
          v24 = v22 + 1;
          v25 = (_QWORD *)(v21 + 24);
          do
          {
            v26 = (v14 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
            *v24++ = v26 - (_DWORD)v22;
            PopCopyWakeSource(v26, v6, (__int64)v23);
            v23 = (_QWORD *)*v23;
            v14 = *(unsigned int *)(v26 + 4) + v26;
          }
          while ( v23 != v25 );
          LODWORD(v4) = v28;
          v15 = v27;
        }
        ++v15;
        ++v16;
        v27 = v15;
        --v8;
      }
      while ( v8 );
      LODWORD(v7) = v30;
      v3 = a2;
    }
    v10 = 0;
  }
  else
  {
    v10 = -1073741789;
  }
  if ( (_DWORD)v7 )
    PopDereferenceWakeInfos(v7, v31);
  *v3 = v9;
  return v10;
}
