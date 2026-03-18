/*
 * XREFs of ?GenerateCtrlInputMessages@InteractiveControlInput@@IEAAJPEAUtagWND@@I@Z @ 0x1402FDAB8
 * Callers:
 *     ?GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@I@Z @ 0x14025560C (-GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@.c)
 * Callees:
 *     _PostMessageExtended @ 0x140020024 (_PostMessageExtended.c)
 */

__int64 __fastcall InteractiveControlInput::GenerateCtrlInputMessages(
        InteractiveControlInput *this,
        struct tagWND *a2,
        int a3)
{
  unsigned int v3; // edi
  unsigned __int64 v7; // rbx
  unsigned int v8; // esi
  unsigned __int64 v9; // r14
  int v11; // [rsp+68h] [rbp+10h] BYREF
  int v12; // [rsp+6Ch] [rbp+14h]

  v3 = 0;
  v11 = 32;
  v7 = 0LL;
  v12 = 1;
  if ( a2 )
  {
    v8 = 0;
    v9 = *(unsigned __int16 *)(*((_QWORD *)this + 5) + 8LL) | ((unsigned __int64)*((unsigned __int16 *)this + 16) << 16);
    while ( 1 )
    {
      if ( v8 >= 0x11 )
        return v3;
      if ( (a3 & (1 << v8)) == 1 << v8 )
        break;
LABEL_16:
      ++v8;
    }
    if ( v8 != 5 && v8 != 6 )
    {
      if ( v8 == 7 )
      {
        v7 = *((int *)this + 19);
        goto LABEL_15;
      }
      if ( v8 != 8 && v8 != 9 )
      {
        if ( v8 != 10 && v8 != 11 && v8 != 12 )
        {
          if ( v8 != 13 )
            goto LABEL_15;
          goto LABEL_14;
        }
        v7 = *((unsigned __int16 *)this + 28) | ((unsigned __int64)*((unsigned __int16 *)this + 30) << 16);
LABEL_15:
        if ( !PostMessageExtended(a2, v8 + 744, v9, v7, (struct tagINPUT_MESSAGE_SOURCE *)&v11) )
          return (unsigned int)-1073740030;
        goto LABEL_16;
      }
    }
LABEL_14:
    v7 = 1LL;
    goto LABEL_15;
  }
  return v3;
}
