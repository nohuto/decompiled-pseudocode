/*
 * XREFs of WPP_RECORDER_SF_S @ 0x140049A2C
 * Callers:
 *     UsbhSetupDevice @ 0x14000901C (UsbhSetupDevice.c)
 *     UsbhGetGlobalUxdSettings @ 0x140022680 (UsbhGetGlobalUxdSettings.c)
 *     UsbhGetInitRegUsbDeviceFlags @ 0x140031674 (UsbhGetInitRegUsbDeviceFlags.c)
 *     UsbhGetRegUsbDeviceFlags @ 0x140031A08 (UsbhGetRegUsbDeviceFlags.c)
 *     UsbhRegQueryGlobalLegacyDeviceKeys @ 0x140031CF8 (UsbhRegQueryGlobalLegacyDeviceKeys.c)
 *     UsbhRegQueryGlobalKey @ 0x140031FDC (UsbhRegQueryGlobalKey.c)
 *     UsbhBusConnectPdo @ 0x140032B60 (UsbhBusConnectPdo.c)
 *     UsbhPdoPnp_QueryDeviceText @ 0x1400352F0 (UsbhPdoPnp_QueryDeviceText.c)
 *     UsbhSetPdoRegistryParameter @ 0x14003647C (UsbhSetPdoRegistryParameter.c)
 *     Usbh_USB_SKIP_CONTAINER_ID_QUERY @ 0x140037250 (Usbh_USB_SKIP_CONTAINER_ID_QUERY.c)
 *     UsbhGetRegUsbHubFlags @ 0x140052558 (UsbhGetRegUsbHubFlags.c)
 *     UsbhQueryGlobalHubValue @ 0x140052840 (UsbhQueryGlobalHubValue.c)
 *     UsbhQueryGlobalLegacyDeviceValue @ 0x140052A50 (UsbhQueryGlobalLegacyDeviceValue.c)
 *     UsbhRegDriverEntry @ 0x140052EE0 (UsbhRegDriverEntry.c)
 *     Usbh_HUB_NO_CLEAR_TT_BUFFER_ON_CANCEL @ 0x1400534E0 (Usbh_HUB_NO_CLEAR_TT_BUFFER_ON_CANCEL.c)
 *     Usbh_HUB_POWER_ON_OVER_CURRENT @ 0x1400535B0 (Usbh_HUB_POWER_ON_OVER_CURRENT.c)
 *     Usbh_HUB_RESET_TT_ON_CANCEL @ 0x140053690 (Usbh_HUB_RESET_TT_ON_CANCEL.c)
 *     Usbh_SetFORCE_PORT_POWER @ 0x140053760 (Usbh_SetFORCE_PORT_POWER.c)
 *     Usbh_SetFORCE_SINGLE_TT @ 0x140053840 (Usbh_SetFORCE_SINGLE_TT.c)
 *     Usbh_SetHUB_OVERCURRENT_DETECTED @ 0x140053910 (Usbh_SetHUB_OVERCURRENT_DETECTED.c)
 *     Usbh_SetHUB_SELECTIVE_SUSPEND @ 0x1400539E0 (Usbh_SetHUB_SELECTIVE_SUSPEND.c)
 *     Usbh_SetPdoEXT_PROPERTY_INSTALLED @ 0x140053AC0 (Usbh_SetPdoEXT_PROPERTY_INSTALLED.c)
 *     Usbh_SetPdoFRIENDLY_NAME @ 0x140053B90 (Usbh_SetPdoFRIENDLY_NAME.c)
 *     Usbh_SetPdo_ALLOWIDLEIRPIND3_INSTALLED @ 0x140053C70 (Usbh_SetPdo_ALLOWIDLEIRPIND3_INSTALLED.c)
 *     Usbh_SetPdo_SELECTIVESUSPENDED_INSTALLED @ 0x140053D40 (Usbh_SetPdo_SELECTIVESUSPENDED_INSTALLED.c)
 *     Usbh_SetPdo_USBPDO_D3COLDRECONNECTTIMEOUT_INSTALLED @ 0x140053E10 (Usbh_SetPdo_USBPDO_D3COLDRECONNECTTIMEOUT_INSTALLED.c)
 *     Usbh_SetWAKE_ON_CONNECT @ 0x140053F10 (Usbh_SetWAKE_ON_CONNECT.c)
 *     Usbh_USB_DEVICE_POWER_UP_DELAY @ 0x140054020 (Usbh_USB_DEVICE_POWER_UP_DELAY.c)
 *     Usbh_USB_DISABLE_ON_SOFT_REMOVE @ 0x140054100 (Usbh_USB_DISABLE_ON_SOFT_REMOVE.c)
 *     Usbh_USB_IGNORE_SN @ 0x1400541D0 (Usbh_USB_IGNORE_SN.c)
 *     Usbh_USB_MSOS20_DESCRIPTOR_SET_INFO_QUERY @ 0x1400542A0 (Usbh_USB_MSOS20_DESCRIPTOR_SET_INFO_QUERY.c)
 *     Usbh_USB_OS_VENDOR_CODE @ 0x140054370 (Usbh_USB_OS_VENDOR_CODE.c)
 *     Usbh_USB_REQUEST_CONFIG_ON_RESET @ 0x140054470 (Usbh_USB_REQUEST_CONFIG_ON_RESET.c)
 *     Usbh_USB_RESET_ON_RESUME @ 0x140054540 (Usbh_USB_RESET_ON_RESUME.c)
 *     Usbh_USB_SKIP_BOS_DESCRIPTOR_QUERY @ 0x140054610 (Usbh_USB_SKIP_BOS_DESCRIPTOR_QUERY.c)
 *     UsbhDeleteUxdDeviceKey @ 0x14005F5F4 (UsbhDeleteUxdDeviceKey.c)
 *     UsbhDeleteUxdPortSettings @ 0x14005F704 (UsbhDeleteUxdPortSettings.c)
 *     UsbhDeleteUxdSubKeys @ 0x14005F7D4 (UsbhDeleteUxdSubKeys.c)
 *     UsbhQueryUxdDevice @ 0x140060140 (UsbhQueryUxdDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_S @ 0x140049A2C
 * Reason: Hex-Rays returned no pseudocode for 0x140049A2C
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140049A2C: mov     rax, rsp
 * 0000000140049A2F: mov     [rax+8], rbx
 * 0000000140049A33: mov     [rax+10h], rbp
 * 0000000140049A37: mov     [rax+18h], rsi
 * 0000000140049A3B: mov     [rax+20h], rdi
 * 0000000140049A3F: push    r12
 * 0000000140049A41: push    r14
 * 0000000140049A43: push    r15
 * 0000000140049A45: sub     rsp, 40h
 * 0000000140049A49: mov     rax, cs:WPP_GLOBAL_Control
 * 0000000140049A50: lea     r12, aNull_0; "NULL"
 * 0000000140049A57: mov     rbx, [rsp+58h+arg_28]
 * 0000000140049A5F: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 0000000140049A63: xor     r15d, r15d
 * 0000000140049A66: movzx   ebp, r9w
 * 0000000140049A6A: mov     r14, rcx
 * 0000000140049A6D: mov     edx, [rax+2Ch]
 * 0000000140049A70: lea     esi, [rdi+0Bh]
 * 0000000140049A73: test    dl, 1
 * 0000000140049A76: jz      short loc_140049AD7
 * 0000000140049A78: test    rbx, rbx
 * 0000000140049A7B: jz      short loc_140049A94
 * 0000000140049A7D: mov     rax, rdi
 * 0000000140049A80: inc     rax
 * 0000000140049A83: cmp     [rbx+rax*2], r15w
 * 0000000140049A88: jnz     short loc_140049A80
 * 0000000140049A8A: lea     rdx, ds:2[rax*2]
 * 0000000140049A92: jmp     short loc_140049A97
 * 0000000140049A94: mov     rdx, rsi
 * 0000000140049A97: mov     rax, cs:pfnWppTraceMessage
 * 0000000140049A9E: test    rbx, rbx
 * 0000000140049AA1: mov     r8, [rsp+58h+arg_20]
 * 0000000140049AA9: mov     rcx, rbx
 * 0000000140049AAC: cmovz   rcx, r12
 * 0000000140049AB0: mov     [rsp+58h+var_28], r15
 * 0000000140049AB5: mov     [rsp+58h+var_30], rdx
 * 0000000140049ABA: mov     r9d, ebp
 * 0000000140049ABD: mov     [rsp+58h+var_38], rcx
 * 0000000140049AC2: mov     edx, 2Bh ; '+'
 * 0000000140049AC7: mov     rcx, cs:WPP_GLOBAL_Control
 * 0000000140049ACE: mov     rcx, [rcx+18h]
 * 0000000140049AD2: call    _guard_dispatch_icall
 * 0000000140049AD7: test    rbx, rbx
 * 0000000140049ADA: jz      short loc_140049AF1
 * 0000000140049ADC: inc     rdi
 * 0000000140049ADF: cmp     [rbx+rdi*2], r15w
 * 0000000140049AE4: jnz     short loc_140049ADC
 * 0000000140049AE6: lea     rsi, ds:2[rdi*2]
 * 0000000140049AEE: test    rbx, rbx
 * 0000000140049AF1: mov     r9, [rsp+58h+arg_20]
 * 0000000140049AF9: cmovz   rbx, r12
 * 0000000140049AFD: mov     [rsp+58h+var_20], r15
 * 0000000140049B02: xor     edx, edx
 * 0000000140049B04: mov     [rsp+58h+var_28], rsi
 * 0000000140049B09: mov     rcx, r14
 * 0000000140049B0C: mov     [rsp+58h+var_30], rbx
 * 0000000140049B11: mov     word ptr [rsp+58h+var_38], bp
 * 0000000140049B16: lea     r8d, [rdx+1]
 * 0000000140049B1A: call    cs:__imp_WppAutoLogTrace
 * 0000000140049B21: nop     dword ptr [rax+rax+00h]
 * 0000000140049B26: mov     rbx, [rsp+58h+arg_0]
 * 0000000140049B2B: mov     rbp, [rsp+58h+arg_8]
 * 0000000140049B30: mov     rsi, [rsp+58h+arg_10]
 * 0000000140049B35: mov     rdi, [rsp+58h+arg_18]
 * 0000000140049B3A: add     rsp, 40h
 * 0000000140049B3E: pop     r15
 * 0000000140049B40: pop     r14
 * 0000000140049B42: pop     r12
 * 0000000140049B44: retn
 */
