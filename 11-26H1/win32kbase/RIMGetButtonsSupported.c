/*
 * XREFs of RIMGetButtonsSupported @ 0x1401AF1FC
 * Callers:
 *     RIMAllocateHidDesc @ 0x1401AE930 (RIMAllocateHidDesc.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x140207AC4 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall RIMGetButtonsSupported(PHIDP_PREPARSED_DATA PreparsedData, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  struct _HIDP_BUTTON_CAPS *v8; // rax
  char *v9; // rbx
  char *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  USHORT ButtonCapsLength[8]; // [rsp+20h] [rbp-98h] BYREF
  struct _HIDP_CAPS Capabilities; // [rsp+30h] [rbp-88h] BYREF

  *a4 = 0;
  *a3 = 0;
  *a2 = 0;
  memset(&Capabilities, 0, sizeof(Capabilities));
  if ( HidP_GetCaps(PreparsedData, &Capabilities) == 1114112 )
  {
    ButtonCapsLength[0] = Capabilities.NumberInputButtonCaps;
    if ( Capabilities.NumberInputButtonCaps )
    {
      v8 = (struct _HIDP_BUTTON_CAPS *)Win32AllocPoolZInitImpl(
                                         256LL,
                                         72LL * Capabilities.NumberInputButtonCaps,
                                         0x78707352u);
      v9 = (char *)v8;
      if ( v8 )
      {
        if ( HidP_GetButtonCaps(HidP_Input, v8, ButtonCapsLength, PreparsedData) == 1114112 && ButtonCapsLength[0] )
        {
          v10 = v9;
          v12 = 1LL;
          v11 = ButtonCapsLength[0];
          do
          {
            if ( *(_WORD *)v10 == 9 )
            {
              switch ( *((_WORD *)v10 + 28) )
              {
                case 1:
                  *a2 = 1;
                  break;
                case 2:
                  *a3 = 1;
                  break;
                case 3:
                  *a4 = 1;
                  break;
              }
            }
            v10 += 72;
            --v11;
          }
          while ( v11 );
        }
        GreDeleteFastMutex(v9, (__int64)v10, v11, v12);
      }
    }
  }
}
