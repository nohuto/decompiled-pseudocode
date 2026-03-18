/*
 * XREFs of DpiCallDrvSetBrightness @ 0x14030AA4C
 * Callers:
 *     ?DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z @ 0x14024DB60 (-DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z.c)
 *     ?DpiBrightnessIfSet@@YAJPEAXE@Z @ 0x14030B510 (-DpiBrightnessIfSet@@YAJPEAXE@Z.c)
 * Callees:
 *     McTemplateK0pqtq_EtwWriteTransfer @ 0x140013990 (McTemplateK0pqtq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiCallDrvSetBrightness(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rsi
  int v4; // edi
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  _QWORD *v7; // r9
  __int64 v8; // r8
  __int16 v9; // ax
  int v10; // esi
  __int64 (__fastcall *v11)(__int64, __int64, __int64, _QWORD *); // rax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // ebx

  v2 = *(_QWORD *)(a1 + 64);
  v4 = a2;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = v2 + 4808;
  v9 = *(_WORD *)(v2 + 4810);
  if ( v9 == 2 )
    v6 = (_QWORD *)(v2 + 4808);
  if ( v9 == 1 )
    v7 = (_QWORD *)(v2 + 4808);
  if ( (!v6 || !v6[4]) && (!v7 || !v7[4]) )
    return 3221225659LL;
  v10 = *(unsigned __int8 *)(v2 + 4528);
  if ( v6 && v6[4] )
  {
    v11 = (__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD *))v6[5];
    v12 = v6[1];
  }
  else
  {
    v11 = (__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD *))v7[5];
    v12 = v7[1];
  }
  LOBYTE(v5) = v4;
  v13 = v11(v12, v5, v8, v7);
  v16 = v13;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pqtq_EtwWriteTransfer(v14, &EventBrightness, v15, a1, v10, v4, v13);
  return v16;
}
