/*
 * XREFs of PnprAddMemoryResources @ 0x1407B1968
 * Callers:
 *     PnprAddDeviceResources @ 0x1407B18E0 (PnprAddDeviceResources.c)
 * Callees:
 *     RtlCmDecodeMemIoResource @ 0x1404CE0F0 (RtlCmDecodeMemIoResource.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnprAddMemoryResources(__int64 a1, _DWORD **a2)
{
  _DWORD *v2; // rbx
  _DWORD *v3; // rbp
  unsigned int *v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rdi
  int v7; // eax
  int v8; // eax
  _DWORD *v9; // rsi
  unsigned int v10; // r15d
  int v11; // r13d
  _DWORD *Pool2; // rax
  _DWORD *v13; // r12
  ULONGLONG v14; // rax
  __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  void *v18; // rcx
  ULONGLONG Start; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v21; // [rsp+68h] [rbp+10h]
  PCM_PARTIAL_RESOURCE_DESCRIPTOR Descriptor; // [rsp+70h] [rbp+18h]

  v21 = a2;
  v2 = *a2;
  Start = 0LL;
  v3 = v2;
  if ( a1 )
    a1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  v4 = *(unsigned int **)(a1 + 416);
  if ( !v4 )
  {
    v5 = PnprContext;
    LODWORD(v6) = 0;
    v7 = *(_DWORD *)(PnprContext + 33288);
    if ( !v7 )
      v7 = 598;
    *(_DWORD *)(PnprContext + 33288) = v7;
    v8 = *(_DWORD *)(v5 + 33292);
    if ( !v8 )
      v8 = 6;
    *(_DWORD *)(v5 + 33292) = v8;
    *a2 = v2;
    return (unsigned int)v6;
  }
  v9 = v4 + 1;
  v10 = 0;
LABEL_10:
  v6 = 0LL;
  if ( v10 < *v4 )
  {
    while ( 1 )
    {
      if ( (unsigned int)v6 >= v9[3] )
      {
        v9 = (_DWORD *)((char *)v9 + (unsigned int)(v6 + 36));
        ++v10;
        goto LABEL_10;
      }
      Descriptor = (PCM_PARTIAL_RESOURCE_DESCRIPTOR)&v9[4 * v6 + 4 + v6];
      if ( Descriptor->Type == 3 || Descriptor->Type == 7 )
      {
        v11 = v2[1];
        if ( v11 == *v2 )
        {
          Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
          v13 = Pool2;
          if ( !Pool2 )
          {
            v15 = PnprContext;
            LODWORD(v6) = -1073741670;
            v16 = *(_DWORD *)(PnprContext + 33288);
            if ( !v16 )
              v16 = 638;
            *(_DWORD *)(PnprContext + 33288) = v16;
            v17 = *(_DWORD *)(v15 + 33292);
            if ( !v17 )
              v17 = 10;
            *(_DWORD *)(v15 + 33292) = v17;
            *v21 = v3;
            if ( v2 != v3 )
            {
              v18 = v2;
              goto LABEL_30;
            }
            return (unsigned int)v6;
          }
          memmove(Pool2, v2, (unsigned int)(16 * (v11 + 1)));
          *v13 = v11 + 4;
          if ( v2 != v3 )
            ExFreePoolWithTag(v2, 0x51706E50u);
          v2 = v13;
        }
        v14 = RtlCmDecodeMemIoResource(Descriptor, &Start);
        *(_QWORD *)&v2[4 * v2[1] + 4] = Start;
        *(_QWORD *)&v2[4 * v2[1] + 6] = v14;
        *((_QWORD *)v2 + 1) += v14;
        ++v2[1];
      }
      v6 = (unsigned int)(v6 + 1);
    }
  }
  *v21 = v2;
  if ( v2 != v3 )
  {
    v18 = v3;
LABEL_30:
    ExFreePoolWithTag(v18, 0x51706E50u);
  }
  return (unsigned int)v6;
}
