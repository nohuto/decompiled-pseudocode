/*
 * XREFs of XilCoreCommonBuffer_RebalanceBuffers @ 0x14002E548
 * Callers:
 *     XilCoreCommonBuffer_RebalanceResources @ 0x14002E414 (XilCoreCommonBuffer_RebalanceResources.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x14002E028 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall XilCoreCommonBuffer_RebalanceBuffers(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v3; // ebp
  __int64 v4; // r14
  __int64 v5; // rbx
  _DWORD *v6; // rdi
  unsigned int v8; // r8d
  unsigned int v9; // eax
  unsigned int v10; // edx
  __int64 *v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // r8
  _QWORD *v14; // rcx
  _QWORD *v15; // rcx
  __int64 v16; // r9
  _QWORD *v17; // r8
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v3 = *(_DWORD *)(a2 + 20);
  v4 = a2 + 48;
  v5 = *(_QWORD *)(a2 + 48);
  v6 = (_DWORD *)a2;
  while ( v5 != v4 && v6[7] > v3 )
  {
    if ( *(_BYTE *)(v5 + 16) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(a2) = 5;
        WPP_RECORDER_SF_q(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          a2,
          8,
          23,
          (__int64)&WPP_2cbb8eaba4893cb9c10a668c9784ba4d_Traceguids,
          v5);
      }
      v9 = v6[1];
      v10 = 0;
      if ( v9 )
      {
        while ( 1 )
        {
          v12 = (_QWORD *)(v5 + 104LL * v10 + 32);
          v13 = *v12;
          if ( *(_QWORD **)(*v12 + 8LL) != v12 )
            break;
          v14 = (_QWORD *)v12[1];
          if ( (_QWORD *)*v14 != v12 )
            break;
          *v14 = v13;
          *(_QWORD *)(v13 + 8) = v14;
          v15 = v12 + 6;
          v12[1] = v12;
          *v12 = v12;
          v16 = v12[6];
          if ( *(_QWORD **)(v16 + 8) != v12 + 6 )
            break;
          v17 = (_QWORD *)v12[7];
          if ( (_QWORD *)*v17 != v15 )
            break;
          *v17 = v16;
          ++v10;
          *(_QWORD *)(v16 + 8) = v17;
          v12[7] = v15;
          *v15 = v15;
          v9 = v6[1];
          if ( v10 >= v9 )
            goto LABEL_14;
        }
LABEL_17:
        __fastfail(3u);
      }
LABEL_14:
      v6[7] -= v9;
      v6[6] -= v9;
      result = *(_QWORD *)v5;
      if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 )
        goto LABEL_17;
      v11 = *(__int64 **)(v5 + 8);
      if ( *v11 != v5 )
        goto LABEL_17;
      *v11 = result;
      *(_QWORD *)(result + 8) = v11;
      a2 = *(_QWORD *)(a1 + 192);
      if ( *(_QWORD *)a2 != a1 + 184 )
        goto LABEL_17;
      *(_QWORD *)v5 = a1 + 184;
      *(_QWORD *)(v5 + 8) = a2;
      *(_QWORD *)a2 = v5;
      *(_QWORD *)(a1 + 192) = v5;
      v5 = result;
      ++*(_DWORD *)(a1 + 176);
    }
    else
    {
      v8 = v6[1];
      LODWORD(a2) = 0;
      if ( v8 )
      {
        while ( 1 )
        {
          result = (unsigned int)a2;
          if ( *(_QWORD *)(104LL * (unsigned int)a2 + v5 + 104) )
            break;
          LODWORD(a2) = a2 + 1;
          if ( (unsigned int)a2 >= v8 )
            goto LABEL_6;
        }
      }
      else
      {
LABEL_6:
        if ( (_DWORD)a2 == v8 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            result = (__int64)WPP_GLOBAL_Control;
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LOBYTE(a2) = 5;
              result = WPP_RECORDER_SF_q(
                         *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
                         a2,
                         8,
                         24,
                         (__int64)&WPP_2cbb8eaba4893cb9c10a668c9784ba4d_Traceguids,
                         v5);
            }
          }
          *(_BYTE *)(v5 + 16) = 1;
          --*(_DWORD *)(a1 + 204);
        }
      }
      v5 = *(_QWORD *)v5;
    }
  }
  return result;
}
