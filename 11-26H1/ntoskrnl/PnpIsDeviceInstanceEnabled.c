/*
 * XREFs of PnpIsDeviceInstanceEnabled @ 0x140AF95E0
 * Callers:
 *     PiProfileUpdateDeviceTreeCallback @ 0x1407AFFD0 (PiProfileUpdateDeviceTreeCallback.c)
 *     PiProcessNewDeviceNode @ 0x1409D9370 (PiProcessNewDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x140AA1A08 (IopInitializeDeviceInstanceKey.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     PnpDisableDevice @ 0x1407A7170 (PnpDisableDevice.c)
 *     _CmGetDeviceRegProp @ 0x140956C70 (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1409575B0 (_CmOpenDeviceRegKey.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14095A580 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PnpUnicodeStringToWstrFree @ 0x140A18820 (PnpUnicodeStringToWstrFree.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x140AF98F0 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpIsDeviceInstanceEnabled(void *a1, unsigned __int16 *a2, int a3)
{
  void *v3; // rbx
  int v5; // r14d
  unsigned int v6; // edi
  int v7; // r12d
  _QWORD *v8; // rax
  void *v9; // r13
  __int64 v10; // rcx
  __int64 v11; // r15
  __int64 v12; // r8
  _WORD *v13; // rcx
  unsigned __int64 v14; // rdx
  void *Pool2; // rax
  void *v16; // r14
  HANDLE v17; // r8
  __int64 v18; // rdx
  char v19; // al
  char v20; // al
  int v21; // eax
  _WORD *v23; // rax
  int v24; // eax
  int v25; // [rsp+40h] [rbp-10h] BYREF
  _DWORD v26[3]; // [rsp+44h] [rbp-Ch] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+40h] BYREF
  int v28; // [rsp+A0h] [rbp+50h]
  int v29; // [rsp+A8h] [rbp+58h] BYREF

  v28 = a3;
  Handle = a1;
  v3 = 0LL;
  v29 = 0;
  v25 = 0;
  v5 = a3;
  v26[0] = 0;
  v6 = 1;
  v7 = 0;
  v8 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)a2, 0x55706E50u);
  v9 = v8;
  if ( !v8 )
  {
    v11 = 0LL;
    goto LABEL_4;
  }
  v10 = *(_QWORD *)(v8[39] + 40LL);
  v11 = v10;
  if ( !v10 || (*(_DWORD *)(v10 + 396) & 0x2000) == 0 || (v24 = *(_DWORD *)(v10 + 404), v24 != 22) && v24 != 29 )
  {
LABEL_4:
    if ( !a2 )
      goto LABEL_28;
    v12 = a2[1];
    if ( (unsigned __int16)v12 >= 2u )
    {
      v13 = (_WORD *)*((_QWORD *)a2 + 1);
      if ( v13 )
      {
        v14 = *a2;
        if ( (unsigned __int16)v14 > (unsigned __int16)v12 )
          goto LABEL_28;
        if ( (_WORD)v14 )
        {
          if ( *v13
            && ((_WORD)v14 != (_WORD)v12 || v13[((unsigned __int64)*a2 >> 1) - 1])
            && (v14 > v12 - 2 || v13[(v14 >> 1) - 1] && v13[v14 >> 1]) )
          {
            Pool2 = (void *)ExAllocatePool2(0x100uLL);
            v16 = Pool2;
            if ( !Pool2 )
              goto LABEL_28;
            memmove(Pool2, *((const void **)a2 + 1), *a2);
            v3 = v16;
            *((_WORD *)v16 + ((unsigned __int64)*a2 >> 1)) = 0;
            v5 = v28;
            goto LABEL_15;
          }
        }
        else if ( *v13 )
        {
          v23 = (_WORD *)ExAllocatePool2(0x100uLL);
          if ( !v23 )
            goto LABEL_28;
          *v23 = 0;
          v3 = v23;
          goto LABEL_15;
        }
        v3 = (void *)*((_QWORD *)a2 + 1);
      }
    }
LABEL_15:
    v17 = Handle;
    if ( Handle )
    {
LABEL_16:
      v25 = 4;
      if ( (int)CmGetDeviceRegProp(
                  *(__int64 *)&PiPnpRtlCtx,
                  (__int64)v3,
                  (__int64)v17,
                  0xBu,
                  (__int64)v26,
                  (__int64)&v29,
                  (__int64)&v25,
                  0) < 0
        || v26[0] == 4 && v25 == 4 )
      {
        v19 = v29;
      }
      else
      {
        v19 = 0;
        v29 = 0;
      }
      if ( (v19 & 1) != 0 )
      {
        v20 = 1;
        v29 = 1;
      }
      else
      {
        PnpGetDeviceInstanceCsConfigFlags(a2, v18, &v29, 0LL);
        v20 = v29;
      }
      if ( (v20 & 7) != 0 )
      {
        v6 = 0;
        if ( v5 )
        {
          if ( v11 )
          {
            v21 = *(_DWORD *)(v11 + 300);
            if ( v21 != 769 && v21 != 770 )
              PnpDisableDevice(v11, 0x16u);
          }
        }
      }
LABEL_29:
      if ( !v9 )
        goto LABEL_31;
      goto LABEL_30;
    }
    if ( (int)CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)v3, 16, 0, 131097, 0, (__int64)&Handle, 0LL) >= 0 )
    {
      v17 = Handle;
      v7 = 1;
      goto LABEL_16;
    }
LABEL_28:
    v6 = 0;
    goto LABEL_29;
  }
  v6 = 0;
LABEL_30:
  ObfDereferenceObjectWithTag(v9, 0x55706E50u);
LABEL_31:
  if ( v7 )
    ZwClose(Handle);
  if ( v3 )
    PnpUnicodeStringToWstrFree(v3, (__int64)a2);
  return v6;
}
