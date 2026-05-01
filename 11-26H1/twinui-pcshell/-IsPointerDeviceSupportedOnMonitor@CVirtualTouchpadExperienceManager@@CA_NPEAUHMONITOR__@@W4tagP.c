/*
 * XREFs of ?IsPointerDeviceSupportedOnMonitor@CVirtualTouchpadExperienceManager@@CA_NPEAUHMONITOR__@@W4tagPOINTER_DEVICE_TYPE@@@Z @ 0x1803976EC
 * Callers:
 *     ?ComputeConstraints@CVirtualTouchpadExperienceManager@@AEAAJAEBUTouchpadPositionAnchorInternal@@_N@Z @ 0x180396674 (-ComputeConstraints@CVirtualTouchpadExperienceManager@@AEAAJAEBUTouchpadPositionAnchorInternal@@.c)
 *     std::_Func_impl_no_alloc__lambda_6e1b05e5ec2a7c8ac356138a45d8d798__bool_HMONITOR_____::_Do_call @ 0x180399730 (std--_Func_impl_no_alloc__lambda_6e1b05e5ec2a7c8ac356138a45d8d798__bool_HMONITOR_____--_Do_call.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180042238 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1802CE0D4 (--_U@YAPEAX_K@Z.c)
 */

char __fastcall CVirtualTouchpadExperienceManager::IsPointerDeviceSupportedOnMonitor(__int64 a1)
{
  char v2; // bl
  signed int Error; // eax
  char *v4; // rdi
  const struct std::nothrow_t *v5; // rdx
  unsigned int i; // ecx
  unsigned int v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  v8 = 0;
  if ( (unsigned int)GetPointerDevices(&v8, 0LL)
    || (Error = ResultFromKnownLastError(), (int)(Error + 0x80000000) < 0)
    || Error == -2147024774 )
  {
    if ( v8 )
    {
      v4 = (char *)operator new[](saturated_mul(v8, 0x438uLL));
      if ( (unsigned int)GetPointerDevices(&v8, v4) || ResultFromKnownLastError() >= 0 )
      {
        for ( i = 0; i < v8; ++i )
        {
          v5 = (const struct std::nothrow_t *)(1080LL * i);
          if ( *(_QWORD *)&v4[(_QWORD)v5 + 24] == a1 && *(_DWORD *)&v4[(_QWORD)v5 + 16] == 3 )
          {
            v2 = 1;
            break;
          }
        }
      }
      operator delete(v4, v5);
    }
  }
  return v2;
}
