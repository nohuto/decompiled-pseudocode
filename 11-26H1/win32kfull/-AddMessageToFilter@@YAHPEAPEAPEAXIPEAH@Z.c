/*
 * XREFs of ?AddMessageToFilter@@YAHPEAPEAPEAXIPEAH@Z @ 0x1401D1644
 * Callers:
 *     _ChangeWindowMessageFilterEx @ 0x14012BF48 (_ChangeWindowMessageFilterEx.c)
 *     _ChangeWindowMessageFilter @ 0x14020C51C (_ChangeWindowMessageFilter.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?MsgLookupTableAlloc@@YAPEAXI@Z @ 0x1401D17EC (-MsgLookupTableAlloc@@YAPEAXI@Z.c)
 */

__int64 __fastcall AddMessageToFilter(void ***a1, unsigned int a2, int *a3)
{
  void **v3; // rbx
  unsigned int v4; // edi
  unsigned __int64 v5; // r15
  __int64 v7; // rsi
  _QWORD *v8; // r14
  __int64 v9; // r8
  int v10; // eax
  int v11; // r9d
  __int64 v12; // rax

  v3 = *a1;
  v4 = 0;
  v5 = a2;
  v7 = 0LL;
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
  v8 = v3[v5 >> 13];
  if ( !v8 )
  {
    v8 = (_QWORD *)Win32AllocPoolZInit(128LL, 1819112277LL);
    if ( !v8 )
    {
      UserSetLastError(14);
      goto LABEL_19;
    }
  }
  v7 = v8[(v5 >> 9) & 0xF];
  if ( !v7 )
  {
    v7 = Win32AllocPoolZInit(64LL, 1819112277LL);
    if ( !v7 )
    {
      UserSetLastError(14);
      if ( v8 != v3[v5 >> 13] )
        Win32FreePool(v8);
      goto LABEL_19;
    }
  }
  v9 = (v5 >> 3) & 0x3F;
  v10 = *(unsigned __int8 *)(v9 + v7);
  v11 = v10 & (1 << (v5 & 7));
  if ( !v11 )
    *(_BYTE *)(v9 + v7) = v10 | (1 << (v5 & 7));
  if ( a3 )
    *a3 = v11;
  v12 = (v5 >> 9) & 0xF;
  if ( v7 != v8[v12] )
    v8[v12] = v7;
  if ( v8 != v3[v5 >> 13] )
    v3[v5 >> 13] = v8;
  if ( v3 != *a1 )
    *a1 = v3;
LABEL_18:
  LOBYTE(v4) = v7 != 0;
  return v4;
}
