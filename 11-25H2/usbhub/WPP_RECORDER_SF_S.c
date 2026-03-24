/*
 * XREFs of WPP_RECORDER_SF_S @ 0x140049E78
 * Callers:
 *     UsbhGetRegUsbDeviceFlags @ 0x1400184C8 (UsbhGetRegUsbDeviceFlags.c)
 *     UsbhRegQueryGlobalLegacyDeviceKeys @ 0x1400187B8 (UsbhRegQueryGlobalLegacyDeviceKeys.c)
 *     UsbhRegQueryGlobalKey @ 0x140018A9C (UsbhRegQueryGlobalKey.c)
 *     UsbhGetInitRegUsbDeviceFlags @ 0x14001A2E4 (UsbhGetInitRegUsbDeviceFlags.c)
 *     UsbhSetupDevice @ 0x14001ADE8 (UsbhSetupDevice.c)
 *     UsbhGetGlobalUxdSettings @ 0x14001D9E4 (UsbhGetGlobalUxdSettings.c)
 *     UsbhBusConnectPdo @ 0x14002DB28 (UsbhBusConnectPdo.c)
 *     UsbhPdoPnp_QueryDeviceText @ 0x1400370D0 (UsbhPdoPnp_QueryDeviceText.c)
 *     UsbhSetPdoRegistryParameter @ 0x140038120 (UsbhSetPdoRegistryParameter.c)
 *     Usbh_USB_SKIP_CONTAINER_ID_QUERY @ 0x140038BC0 (Usbh_USB_SKIP_CONTAINER_ID_QUERY.c)
 *     UsbhGetRegUsbHubFlags @ 0x14005205C (UsbhGetRegUsbHubFlags.c)
 *     UsbhQueryGlobalHubValue @ 0x140052340 (UsbhQueryGlobalHubValue.c)
 *     UsbhQueryGlobalLegacyDeviceValue @ 0x140052550 (UsbhQueryGlobalLegacyDeviceValue.c)
 *     UsbhRegDriverEntry @ 0x1400529E0 (UsbhRegDriverEntry.c)
 *     Usbh_HUB_NO_CLEAR_TT_BUFFER_ON_CANCEL @ 0x140052FD0 (Usbh_HUB_NO_CLEAR_TT_BUFFER_ON_CANCEL.c)
 *     Usbh_HUB_POWER_ON_OVER_CURRENT @ 0x1400530A0 (Usbh_HUB_POWER_ON_OVER_CURRENT.c)
 *     Usbh_HUB_RESET_TT_ON_CANCEL @ 0x140053180 (Usbh_HUB_RESET_TT_ON_CANCEL.c)
 *     Usbh_SetFORCE_PORT_POWER @ 0x140053250 (Usbh_SetFORCE_PORT_POWER.c)
 *     Usbh_SetFORCE_SINGLE_TT @ 0x140053330 (Usbh_SetFORCE_SINGLE_TT.c)
 *     Usbh_SetHUB_OVERCURRENT_DETECTED @ 0x140053400 (Usbh_SetHUB_OVERCURRENT_DETECTED.c)
 *     Usbh_SetHUB_SELECTIVE_SUSPEND @ 0x1400534D0 (Usbh_SetHUB_SELECTIVE_SUSPEND.c)
 *     Usbh_SetPdoEXT_PROPERTY_INSTALLED @ 0x1400535B0 (Usbh_SetPdoEXT_PROPERTY_INSTALLED.c)
 *     Usbh_SetPdoFRIENDLY_NAME @ 0x140053680 (Usbh_SetPdoFRIENDLY_NAME.c)
 *     Usbh_SetPdo_ALLOWIDLEIRPIND3_INSTALLED @ 0x140053760 (Usbh_SetPdo_ALLOWIDLEIRPIND3_INSTALLED.c)
 *     Usbh_SetPdo_SELECTIVESUSPENDED_INSTALLED @ 0x140053830 (Usbh_SetPdo_SELECTIVESUSPENDED_INSTALLED.c)
 *     Usbh_SetPdo_USBPDO_D3COLDRECONNECTTIMEOUT_INSTALLED @ 0x140053900 (Usbh_SetPdo_USBPDO_D3COLDRECONNECTTIMEOUT_INSTALLED.c)
 *     Usbh_SetWAKE_ON_CONNECT @ 0x140053A00 (Usbh_SetWAKE_ON_CONNECT.c)
 *     Usbh_USB_DEVICE_POWER_UP_DELAY @ 0x140053B10 (Usbh_USB_DEVICE_POWER_UP_DELAY.c)
 *     Usbh_USB_DISABLE_ON_SOFT_REMOVE @ 0x140053BF0 (Usbh_USB_DISABLE_ON_SOFT_REMOVE.c)
 *     Usbh_USB_IGNORE_SN @ 0x140053CC0 (Usbh_USB_IGNORE_SN.c)
 *     Usbh_USB_MSOS20_DESCRIPTOR_SET_INFO_QUERY @ 0x140053D90 (Usbh_USB_MSOS20_DESCRIPTOR_SET_INFO_QUERY.c)
 *     Usbh_USB_OS_VENDOR_CODE @ 0x140053E60 (Usbh_USB_OS_VENDOR_CODE.c)
 *     Usbh_USB_REQUEST_CONFIG_ON_RESET @ 0x140053F60 (Usbh_USB_REQUEST_CONFIG_ON_RESET.c)
 *     Usbh_USB_RESET_ON_RESUME @ 0x140054030 (Usbh_USB_RESET_ON_RESUME.c)
 *     Usbh_USB_SKIP_BOS_DESCRIPTOR_QUERY @ 0x140054100 (Usbh_USB_SKIP_BOS_DESCRIPTOR_QUERY.c)
 *     UsbhDeleteUxdDeviceKey @ 0x14005EFAC (UsbhDeleteUxdDeviceKey.c)
 *     UsbhDeleteUxdPortSettings @ 0x14005F06C (UsbhDeleteUxdPortSettings.c)
 *     UsbhDeleteUxdSubKeys @ 0x14005F13C (UsbhDeleteUxdSubKeys.c)
 *     UsbhQueryUxdDevice @ 0x14005FA90 (UsbhQueryUxdDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140061530 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_S @ 0x140049E78
 * Reason: Hex-Rays returned no pseudocode for 0x140049E78
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140049E78: mov     rax, rsp
 * 0000000140049E7B: mov     [rax+8], rbx
 * 0000000140049E7F: mov     [rax+10h], rbp
 * 0000000140049E83: mov     [rax+18h], rsi
 * 0000000140049E87: mov     [rax+20h], rdi
 * 0000000140049E8B: push    r12
 * 0000000140049E8D: push    r14
 * 0000000140049E8F: push    r15
 * 0000000140049E91: sub     rsp, 40h
 * 0000000140049E95: mov     rax, cs:WPP_GLOBAL_Control
 * 0000000140049E9C: lea     r12, aNull_0; "NULL"
 * 0000000140049EA3: mov     rbx, [rsp+58h+arg_28]
 * 0000000140049EAB: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 0000000140049EAF: xor     r15d, r15d
 * 0000000140049EB2: movzx   ebp, r9w
 * 0000000140049EB6: mov     r14, rcx
 * 0000000140049EB9: mov     edx, [rax+2Ch]
 * 0000000140049EBC: lea     esi, [rdi+0Bh]
 * 0000000140049EBF: test    dl, 1
 * 0000000140049EC2: jz      short loc_140049F23
 * 0000000140049EC4: test    rbx, rbx
 * 0000000140049EC7: jz      short loc_140049EE0
 * 0000000140049EC9: mov     rax, rdi
 * 0000000140049ECC: inc     rax
 * 0000000140049ECF: cmp     [rbx+rax*2], r15w
 * 0000000140049ED4: jnz     short loc_140049ECC
 * 0000000140049ED6: lea     rdx, ds:2[rax*2]
 * 0000000140049EDE: jmp     short loc_140049EE3
 * 0000000140049EE0: mov     rdx, rsi
 * 0000000140049EE3: mov     rax, cs:pfnWppTraceMessage
 * 0000000140049EEA: test    rbx, rbx
 * 0000000140049EED: mov     r8, [rsp+58h+arg_20]
 * 0000000140049EF5: mov     rcx, rbx
 * 0000000140049EF8: cmovz   rcx, r12
 * 0000000140049EFC: mov     [rsp+58h+var_28], r15
 * 0000000140049F01: mov     [rsp+58h+var_30], rdx
 * 0000000140049F06: mov     r9d, ebp
 * 0000000140049F09: mov     [rsp+58h+var_38], rcx
 * 0000000140049F0E: mov     edx, 2Bh ; '+'
 * 0000000140049F13: mov     rcx, cs:WPP_GLOBAL_Control
 * 0000000140049F1A: mov     rcx, [rcx+18h]
 * 0000000140049F1E: call    _guard_dispatch_icall
 * 0000000140049F23: test    rbx, rbx
 * 0000000140049F26: jz      short loc_140049F3D
 * 0000000140049F28: inc     rdi
 * 0000000140049F2B: cmp     [rbx+rdi*2], r15w
 * 0000000140049F30: jnz     short loc_140049F28
 * 0000000140049F32: lea     rsi, ds:2[rdi*2]
 * 0000000140049F3A: test    rbx, rbx
 * 0000000140049F3D: mov     r9, [rsp+58h+arg_20]
 * 0000000140049F45: cmovz   rbx, r12
 * 0000000140049F49: mov     [rsp+58h+var_20], r15
 * 0000000140049F4E: xor     edx, edx
 * 0000000140049F50: mov     [rsp+58h+var_28], rsi
 * 0000000140049F55: mov     rcx, r14
 * 0000000140049F58: mov     [rsp+58h+var_30], rbx
 * 0000000140049F5D: mov     word ptr [rsp+58h+var_38], bp
 * 0000000140049F62: lea     r8d, [rdx+1]
 * 0000000140049F66: call    cs:__imp_WppAutoLogTrace
 * 0000000140049F6D: nop     dword ptr [rax+rax+00h]
 * 0000000140049F72: mov     rbx, [rsp+58h+arg_0]
 * 0000000140049F77: mov     rbp, [rsp+58h+arg_8]
 * 0000000140049F7C: mov     rsi, [rsp+58h+arg_10]
 * 0000000140049F81: mov     rdi, [rsp+58h+arg_18]
 * 0000000140049F86: add     rsp, 40h
 * 0000000140049F8A: pop     r15
 * 0000000140049F8C: pop     r14
 * 0000000140049F8E: pop     r12
 * 0000000140049F90: retn
 */
