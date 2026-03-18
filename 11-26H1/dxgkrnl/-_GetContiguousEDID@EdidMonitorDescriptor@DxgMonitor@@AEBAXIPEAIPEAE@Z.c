/*
 * XREFs of ?_GetContiguousEDID@EdidMonitorDescriptor@DxgMonitor@@AEBAXIPEAIPEAE@Z @ 0x1403F2F04
 * Callers:
 *     ?GetRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@PEAI@Z @ 0x1403F2E20 (-GetRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@$$BY0A@EU-$default_delet.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgMonitor::EdidMonitorDescriptor::_GetContiguousEDID(
        DxgMonitor::EdidMonitorDescriptor *this,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int8 *a4)
{
  unsigned int v4; // r10d
  __int64 v6; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  _OWORD *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  _OWORD *v14; // rdx

  v4 = 0;
  v6 = 0LL;
  while ( 1 )
  {
    if ( !v4 )
    {
      v10 = 0LL;
      v12 = **((_QWORD **)this + 3);
      v13 = *(_QWORD *)(v12 + 16);
      v14 = (_OWORD *)(v12 + 24);
      if ( v13 >= 0x80 )
        v10 = v14;
      goto LABEL_7;
    }
    if ( v4 >= *((_DWORD *)this + 4) )
      break;
    v8 = *((_QWORD *)this + 3);
    if ( !v8 )
      break;
    v9 = *(_QWORD *)(v6 + v8);
    if ( *(_QWORD *)(v9 + 16) < 0x80uLL )
      break;
    v10 = (_OWORD *)(v9 + 24);
LABEL_7:
    if ( v10 )
    {
      v11 = v4 << 7;
      if ( (int)v11 + 128 <= a2 )
      {
        ++v4;
        v6 += 8LL;
        *(_OWORD *)&a4[v11] = *v10;
        *(_OWORD *)&a4[v11 + 16] = v10[1];
        *(_OWORD *)&a4[v11 + 32] = v10[2];
        *(_OWORD *)&a4[v11 + 48] = v10[3];
        *(_OWORD *)&a4[v11 + 64] = v10[4];
        *(_OWORD *)&a4[v11 + 80] = v10[5];
        *(_OWORD *)&a4[v11 + 96] = v10[6];
        *(_OWORD *)&a4[v11 + 112] = v10[7];
        if ( v4 < 0x37 )
          continue;
      }
    }
    break;
  }
  *a3 = v4 << 7;
}
