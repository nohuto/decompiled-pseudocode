/*
 * XREFs of NVMeHwStartIo @ 0x14000BEE0
 * Callers:
 *     <none>
 * Callees:
 *     NVMeSetSenseData @ 0x140002E20 (NVMeSetSenseData.c)
 *     NVMeControllerPowerDown @ 0x140007400 (NVMeControllerPowerDown.c)
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     WaitForCommandComplete @ 0x14000C330 (WaitForCommandComplete.c)
 *     GetSrbScsiAddress @ 0x14000F000 (GetSrbScsiAddress.c)
 */

char __fastcall NVMeHwStartIo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  int v7; // ebp
  __int64 v8; // rax
  __int64 v9; // rdi
  int v10; // eax
  unsigned __int8 v12; // r9
  char v13; // r8
  char v14; // dl
  __int64 v15; // rax
  int v16; // ecx
  bool v17; // zf
  __int64 v18; // rcx
  unsigned int v19; // [rsp+50h] [rbp+8h] BYREF
  char v20; // [rsp+58h] [rbp+10h] BYREF
  char v21; // [rsp+60h] [rbp+18h] BYREF

  v6 = *(unsigned __int8 *)(a2 + 2);
  if ( (_BYTE)v6 == 40 )
    v7 = *(_DWORD *)(a2 + 20);
  else
    v7 = v6;
  v8 = 104LL;
  if ( (_BYTE)v6 != 40 )
    v8 = 56LL;
  v9 = *(_QWORD *)(v8 + a2);
  if ( (v9 & 0xFFF) != 0 )
    v9 = v9 - (v9 & 0xFFF) + 4096;
  if ( !a1 || (*(_DWORD *)(a1 + 4064) & 0x1000) == 0 )
  {
    if ( v7 != 9 )
    {
      if ( v7 == 32 )
      {
LABEL_16:
        *(_BYTE *)(a2 + 3) = 6;
      }
      else
      {
        switch ( v7 )
        {
          case 0:
          case 2:
          case 10:
            goto LABEL_10;
          case 7:
            v17 = *(_BYTE *)(a1 + 20) == 0;
            v19 = 0;
            if ( !v17 )
              NVMeControllerPowerDown(a1, v6, 0x140000000LL, a4);
            GetSrbScsiAddress(a2, &v21, &v20, &v19);
            if ( v19 < *(_DWORD *)(a1 + 224) )
            {
              v18 = *(_QWORD *)(a1 + 8LL * v19 + 1672);
              if ( v18 )
                *(_DWORD *)(v18 + 20) |= 2u;
            }
            *(_BYTE *)(a2 + 3) = 1;
            goto LABEL_12;
          case 37:
            if ( (_BYTE)v6 == 40 )
            {
              v15 = *(unsigned int *)(a2 + 120);
              v16 = *(_DWORD *)(v15 + a2 + 12);
              v17 = *(_DWORD *)(v15 + a2 + 16) == 1;
            }
            else
            {
              v16 = *(_DWORD *)(a2 + 8);
              v17 = *(_DWORD *)(a2 + 64) == 1;
            }
            if ( !v17 )
              goto LABEL_16;
            if ( v16 == 2 || v16 == 23 )
            {
              *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 24) & 0xFFFFFDF6 | 8;
              *(_BYTE *)(a2 + 3) = 1;
            }
            else
            {
              if ( v16 != 4 )
                goto LABEL_16;
              *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 24) & 0xFFFFFDFC | 2;
              *(_BYTE *)(a2 + 3) = 1;
            }
            break;
          default:
            goto LABEL_16;
        }
      }
      goto LABEL_12;
    }
LABEL_10:
    v10 = *(_DWORD *)(a1 + 24);
    if ( (v10 & 1) != 0 )
    {
      if ( (v10 & 0x10) == 0 )
        goto LABEL_12;
      v12 = 0;
      v14 = 14;
      v13 = 0;
    }
    else
    {
      v12 = 37;
      v13 = 5;
      v14 = 8;
    }
    NVMeSetSenseData(a2, v14, v13, v12);
LABEL_12:
    if ( *(_BYTE *)(a2 + 3) )
    {
      StorPortNotification(0LL, a1, a2);
    }
    else
    {
      ProcessCommand(a1, a2);
      if ( v7 == 10 && (*(_BYTE *)(v9 + 4225) & 0x21) == 1 )
        WaitForCommandComplete(a1, a2, 1LL);
    }
  }
  return 1;
}
