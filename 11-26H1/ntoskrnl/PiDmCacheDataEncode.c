/*
 * XREFs of PiDmCacheDataEncode @ 0x140ADA71C
 * Callers:
 *     PiDmObjectProcessPropertyChange @ 0x140951BA0 (PiDmObjectProcessPropertyChange.c)
 *     PiPnpRtlObjectActionCallback @ 0x140965980 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x140966B10 (PiDmObjectUpdateCachedObjectProperty.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     PiDmGetObject @ 0x1409637D0 (PiDmGetObject.c)
 *     _PnpStringFromGuid @ 0x1409B134C (_PnpStringFromGuid.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDmCacheDataEncode(int a1, int *a2, unsigned int a3, int a4, int a5, __int64 a6)
{
  size_t v6; // r15
  int *v7; // rbp
  unsigned int v9; // edi
  int Object; // eax
  __int128 v12; // xmm0
  void *Pool2; // rax
  wchar_t v14[40]; // [rsp+20h] [rbp-98h] BYREF

  v6 = a3;
  v7 = a2;
  v9 = 0;
  if ( a1 )
  {
    if ( a5 && a1 == a4 )
    {
      if ( a1 == 13 )
      {
        v9 = PnpStringFromGuid(a2, v14);
        if ( (v9 & 0x80000000) != 0 )
          return v9;
        a2 = (int *)v14;
      }
      else
      {
        if ( a1 != 18 || !a2 )
        {
LABEL_6:
          if ( (unsigned int)v6 > 8 )
          {
            Pool2 = (void *)ExAllocatePool2(0x100uLL);
            *(_QWORD *)(a6 + 16) = Pool2;
            if ( !Pool2 )
              return (unsigned int)-1073741670;
            memmove(Pool2, v7, v6);
            *(_DWORD *)a6 = 5;
          }
          else
          {
            memmove((void *)(a6 + 16), v7, v6);
            *(_DWORD *)a6 = 3;
          }
          *(_DWORD *)(a6 + 12) = v6;
LABEL_9:
          *(_DWORD *)(a6 + 8) = a1;
          return v9;
        }
        *((_WORD *)a2 + ((unsigned __int64)a3 >> 1) - 1) = 0;
      }
      Object = PiDmGetObject(a5, (unsigned __int16 *)a2, (_QWORD *)(a6 + 16));
      v9 = Object;
      if ( Object != -1073741772 )
      {
        if ( Object < 0 )
          return v9;
        *(_DWORD *)a6 = 6;
        goto LABEL_9;
      }
      v9 = 0;
    }
    if ( a1 == 13 )
    {
      v12 = *(_OWORD *)v7;
      *(_DWORD *)a6 = 4;
      *(_OWORD *)(a6 + 8) = v12;
      return v9;
    }
    goto LABEL_6;
  }
  *(_DWORD *)a6 = 2;
  return v9;
}
