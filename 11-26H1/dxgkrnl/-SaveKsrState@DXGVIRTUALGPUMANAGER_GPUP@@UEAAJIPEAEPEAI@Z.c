/*
 * XREFs of ?SaveKsrState@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJIPEAEPEAI@Z @ 0x14021F250
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140009344 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGVIRTUALGPUMANAGER_GPUP::SaveKsrState(
        struct _KTHREAD **this,
        unsigned int a2,
        unsigned __int8 *a3,
        unsigned int *a4)
{
  unsigned int v8; // ebx
  int v9; // r10d
  unsigned int v10; // r8d
  unsigned int i; // edx
  __int64 v12; // r9
  unsigned int v13; // ecx
  unsigned __int64 v14; // r8
  unsigned __int8 *v15; // r8
  unsigned int j; // r9d
  __int64 v17; // r10
  unsigned __int8 *v18; // r11
  unsigned int v19; // ebp
  __int64 v20; // rcx
  __int64 v21; // rax
  _BYTE v23[32]; // [rsp+50h] [rbp-38h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v23, this + 5);
  v8 = 0;
  *a4 = 0;
  v9 = *((_DWORD *)this + 4);
  if ( v9 )
  {
    v10 = 4;
    for ( i = 0; i < *((_DWORD *)this + 3); ++i )
    {
      v12 = *((_QWORD *)this[3] + i);
      if ( v12 )
      {
        v13 = v10 + 16;
        if ( v10 + 16 < v10 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 1880;
          goto LABEL_12;
        }
        v14 = 24LL * *(unsigned int *)(v12 + 168);
        if ( v14 > 0xFFFFFFFF )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 1888;
          goto LABEL_12;
        }
        v10 = v13 + v14;
        if ( v10 < v13 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 1895;
LABEL_12:
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to calculate KSR TotalSize: 0x%I64x",
            -1073741675LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v8 = -1073741675;
          goto LABEL_24;
        }
      }
    }
    if ( a3 )
    {
      if ( v10 > a2 )
      {
        v8 = -1073741789;
        goto LABEL_24;
      }
      *(_DWORD *)a3 = v9;
      v15 = a3 + 4;
      for ( j = 0; j < *((_DWORD *)this + 3); ++j )
      {
        v17 = *((_QWORD *)this[3] + j);
        if ( v17 )
        {
          v18 = v15;
          *(_DWORD *)v15 = *(_DWORD *)(v17 + 24);
          v19 = 0;
          *((_DWORD *)v15 + 2) = *(_DWORD *)(v17 + 168);
          v15 += 16;
          if ( *(_DWORD *)(v17 + 168) )
          {
            do
            {
              v20 = *(_QWORD *)(v17 + 184);
              v21 = v19++;
              *((_QWORD *)v15 + 1) = *(_QWORD *)(112 * v21 + v20 + 8);
              *(_DWORD *)v15 = *(_DWORD *)(112 * v21 + v20 + 28);
              *((_DWORD *)v15 + 1) = *(_DWORD *)(112 * v21 + v20 + 24);
              *((_QWORD *)v15 + 2) = *(_QWORD *)(112 * v21 + v20 + 16);
              v15 += 24;
            }
            while ( v19 < *(_DWORD *)(v17 + 168) );
          }
          *((_DWORD *)v18 + 3) = (_DWORD)v15 - (_DWORD)v18;
        }
      }
      v10 = (_DWORD)v15 - (_DWORD)a3;
    }
    *a4 = v10;
  }
LABEL_24:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v23);
  return v8;
}
