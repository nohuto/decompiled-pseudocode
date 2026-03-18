/*
 * XREFs of ?vSetup@XCLIPOBJ@@QEAAXPEAVREGION@@AEBVERECTL@@H@Z @ 0x140022840
 * Callers:
 *     EngUpdateDeviceSurface @ 0x1401F1910 (EngUpdateDeviceSurface.c)
 * Callees:
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x140021850 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall XCLIPOBJ::vSetup(XCLIPOBJ *this, struct REGION *a2, const struct ERECTL *a3, int a4)
{
  PVOID DeferredContext; // r10
  unsigned int v8; // eax
  _DWORD *v9; // rax
  int v10; // r9d
  int v11; // r8d
  int v12; // edx
  int v13; // ecx
  _DWORD *v14; // r8
  int v15; // ecx
  int v16; // r9d
  int v17; // edx
  int v18; // r11d
  unsigned int v19; // eax
  __int64 v20; // rcx
  unsigned int v21; // eax
  __int64 v22; // rdx
  int v23; // esi
  int v24; // r12d
  int v25; // r14d
  int v26; // ebp
  _DWORD *v27; // rdx
  int v28; // r10d
  int v29; // r8d
  char v30; // r11
  int v31; // eax
  int v32; // r15d
  __int64 j; // r10
  _DWORD *v34; // r13
  _DWORD *v35; // rcx
  int v36; // eax
  int v37; // ecx
  int v38; // eax
  int v39; // edx
  int v40; // r8d
  int v41; // ecx
  unsigned int sizeScan; // eax
  int v43; // [rsp+60h] [rbp+8h]
  int i; // [rsp+68h] [rbp+10h]

  DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
  *((_QWORD *)this + 7) = a2;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 4) = *((_DWORD *)a3 + 3);
  *((_DWORD *)this + 3) = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 2) = *((_DWORD *)a3 + 1);
  *((_DWORD *)this + 1) = *(_DWORD *)a3;
  *(_DWORD *)this = *((_DWORD *)a2 + 18);
  if ( DeferredContext )
  {
    v8 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)DeferredContext + 176LL))((char *)a2 + 24);
    DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
  }
  else
  {
    v8 = *((_DWORD *)a2 + 10);
  }
  if ( v8 > 0x38
    || (v9 = (_DWORD *)*((_QWORD *)this + 7), v10 = *((_DWORD *)this + 1), v10 < v9[13])
    || (v11 = *((_DWORD *)this + 2), v11 < v9[14])
    || (v12 = *((_DWORD *)this + 3), v12 > v9[15])
    || (v13 = *((_DWORD *)this + 4), v10 >= v12)
    || v13 > v9[16]
    || v11 >= v13
    || a4 == 1 )
  {
    v14 = (_DWORD *)*((_QWORD *)this + 7);
    v15 = *((_DWORD *)this + 1);
    v16 = *((_DWORD *)this + 2);
    v17 = *((_DWORD *)this + 3);
    v18 = *((_DWORD *)this + 4);
    if ( v15 <= v14[13] )
      v15 = v14[13];
    *((_DWORD *)this + 1) = v15;
    if ( v16 <= v14[14] )
      v16 = v14[14];
    *((_DWORD *)this + 2) = v16;
    if ( v17 >= v14[15] )
      v17 = v14[15];
    *((_DWORD *)this + 3) = v17;
    if ( v18 >= v14[16] )
      v18 = v14[16];
    *((_DWORD *)this + 4) = v18;
    if ( v15 >= v17 || v16 >= v18 )
    {
      *((_DWORD *)this + 1) = v17;
      return;
    }
    if ( DeferredContext )
    {
      v19 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)DeferredContext + 176LL))(v14 + 6);
      DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
    }
    else
    {
      v19 = v14[10];
    }
    if ( v19 <= 0x38 && a4 != 1 )
    {
      if ( a4 != 2 )
        *((_BYTE *)this + 20) = 1;
      return;
    }
    v20 = *((_QWORD *)this + 7);
    *((_DWORD *)this + 34) = 0;
    if ( DeferredContext )
    {
      v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)DeferredContext + 176LL))(v20 + 24);
      v20 = *((_QWORD *)this + 7);
      DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
    }
    else
    {
      v21 = *(_DWORD *)(v20 + 40);
    }
    if ( v21 <= 0x70 )
    {
      sizeScan = REGION_CORE::get_sizeScan((REGION_CORE *)(v20 + 24));
      DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
      if ( sizeScan > 0x38 )
        *((_BYTE *)this + 21) = 2;
    }
    else
    {
      *((_BYTE *)this + 21) = 3;
    }
    v22 = *((_QWORD *)this + 7);
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    if ( DeferredContext )
      v27 = (_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)DeferredContext + 208LL))(v22 + 24);
    else
      v27 = *(_DWORD **)(v22 + 24);
    v28 = a4 != 1;
    v29 = *(_DWORD *)(*((_QWORD *)this + 7) + 48LL);
    for ( i = v28; v29; --v29 )
    {
      if ( *((_DWORD *)this + 2) < v27[2] )
        break;
      v27 = (_DWORD *)((char *)v27 + (unsigned int)(4 * *v27 + 16));
    }
    v30 = 1;
LABEL_39:
    v31 = v29--;
    if ( v31 && v27[1] < *((_DWORD *)this + 4) )
    {
      v32 = 0;
      for ( j = 0LL; ; j = (unsigned int)(j + 2) )
      {
        if ( (_DWORD)j == *v27 )
        {
LABEL_53:
          v28 = v32 & i;
          i &= v32;
          v27 = (_DWORD *)((char *)v27 + (unsigned int)(4 * *v27 + 16));
          goto LABEL_39;
        }
        v43 = *((_DWORD *)this + 1);
        v34 = &v27[(unsigned int)(j + 1)];
        if ( v34[3] > v43 )
          break;
LABEL_52:
        ;
      }
      v35 = &v27[j];
      if ( v35[3] >= *((_DWORD *)this + 3) )
        goto LABEL_53;
      if ( ++*((_DWORD *)this + 34) >= 0xAu )
      {
        *((_BYTE *)this + 20) = 3;
        *((_DWORD *)this + 34) = -1;
        return;
      }
      v36 = v34[3];
      v37 = v35[3];
      if ( v23 == v25 || v24 == v26 )
      {
        v23 = v37;
        v24 = v27[1];
        v25 = v34[3];
      }
      else
      {
        if ( v37 < v23 )
          v23 = v37;
        if ( v27[1] < v24 )
          v24 = v27[1];
        if ( v36 > v25 )
          v25 = v34[3];
        if ( v27[2] <= v26 )
          goto LABEL_49;
      }
      v26 = v27[2];
LABEL_49:
      if ( v43 >= v37 && *((_DWORD *)this + 3) <= v36 )
        v32 = 1;
      goto LABEL_52;
    }
    v38 = *((_DWORD *)this + 1);
    if ( v23 > v38 )
    {
      *((_DWORD *)this + 1) = v23;
      v38 = v23;
    }
    v39 = *((_DWORD *)this + 2);
    if ( v24 > v39 )
    {
      *((_DWORD *)this + 2) = v24;
      v39 = v24;
    }
    v40 = *((_DWORD *)this + 3);
    if ( v25 < v40 )
    {
      *((_DWORD *)this + 3) = v25;
      v40 = v25;
    }
    v41 = *((_DWORD *)this + 4);
    if ( v26 < v41 )
    {
      *((_DWORD *)this + 4) = v26;
      v41 = v26;
    }
    if ( v40 < v38 )
    {
      *((_DWORD *)this + 1) = v40;
      v38 = v40;
    }
    else if ( v41 < v39 )
    {
      *((_DWORD *)this + 2) = v41;
      v39 = v41;
    }
    if ( !v28 )
    {
      if ( *((_DWORD *)this + 34) != 1 )
        v30 = 3;
      goto LABEL_68;
    }
    if ( !a4
      && (v38 != *(_DWORD *)a3 || v40 != *((_DWORD *)a3 + 2) || v39 != *((_DWORD *)a3 + 1) || v41 != *((_DWORD *)a3 + 3)) )
    {
LABEL_68:
      *((_BYTE *)this + 20) = v30;
    }
  }
}
