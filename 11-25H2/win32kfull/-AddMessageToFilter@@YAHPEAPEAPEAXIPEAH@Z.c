/*
 * XREFs of ?AddMessageToFilter@@YAHPEAPEAPEAXIPEAH@Z @ 0x14019FB2C
 * Callers:
 *     _ChangeWindowMessageFilter @ 0x1401E35BC (_ChangeWindowMessageFilter.c)
 *     _ChangeWindowMessageFilterEx @ 0x140256184 (_ChangeWindowMessageFilterEx.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?MsgLookupTableAlloc@@YAPEAXI@Z @ 0x14019FCD0 (-MsgLookupTableAlloc@@YAPEAXI@Z.c)
 */

__int64 __fastcall AddMessageToFilter(void ***a1, unsigned int a2, int *a3)
{
  void **v3; // rbx
  unsigned int v4; // edi
  unsigned __int64 v5; // r15
  __int64 v8; // rsi
  _QWORD *v9; // r14
  __int64 v10; // r8
  int v11; // eax
  int v12; // r9d
  __int64 v13; // rax

  v3 = *a1;
  v4 = 0;
  v5 = a2;
  v8 = 0LL;
  if ( !*a1 )
  {
    v3 = (void **)MsgLookupTableAlloc(0);
    if ( !v3 )
    {
LABEL_19:
      if ( v3 && v3 != *a1 )
        Win32FreePool(v3);
      goto LABEL_18;
    }
  }
  v9 = v3[v5 >> 13];
  if ( !v9 )
  {
    v9 = (_QWORD *)Win32AllocPoolZInit(128LL, 1819112277LL);
    if ( !v9 )
    {
      UserSetLastError(14);
      goto LABEL_19;
    }
  }
  v8 = v9[(v5 >> 9) & 0xF];
  if ( !v8 )
  {
    v8 = Win32AllocPoolZInit(64LL, 1819112277LL);
    if ( !v8 )
    {
      UserSetLastError(14);
      if ( v9 != v3[v5 >> 13] )
        Win32FreePool(v9);
      goto LABEL_19;
    }
  }
  v10 = (v5 >> 3) & 0x3F;
  v11 = *(unsigned __int8 *)(v10 + v8);
  v12 = v11 & (1 << (v5 & 7));
  if ( !v12 )
    *(_BYTE *)(v10 + v8) = v11 | (1 << (v5 & 7));
  if ( a3 )
    *a3 = v12;
  v13 = (v5 >> 9) & 0xF;
  if ( v8 != v9[v13] )
    v9[v13] = v8;
  if ( v9 != v3[v5 >> 13] )
    v3[v5 >> 13] = v9;
  if ( v3 != *a1 )
    *a1 = v3;
LABEL_18:
  LOBYTE(v4) = v8 != 0;
  return v4;
}
