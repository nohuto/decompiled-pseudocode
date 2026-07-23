/*
 * XREFs of _RegRtlQueryKeyPathName @ 0x1408A3D28
 * Callers:
 *     _PnpCtxRegQueryKeyPathName @ 0x14089C3B4 (_PnpCtxRegQueryKeyPathName.c)
 * Callees:
 *     RtlULongSub @ 0x1404CF71C (RtlULongSub.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwQueryObject @ 0x1407281C0 (ZwQueryObject.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     _RegRtlIsPredefinedKey @ 0x140979188 (_RegRtlIsPredefinedKey.c)
 *     _RegRtlOpenPredefinedKey @ 0x140AE6AB8 (_RegRtlOpenPredefinedKey.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RegRtlQueryKeyPathName(HANDLE a1, const void **a2, unsigned int *a3)
{
  __int64 v6; // rcx
  NTSTATUS v7; // ebx
  unsigned __int64 v8; // rdi
  const void **v9; // r13
  HANDLE v10; // rcx
  ULONG v11; // r9d
  NTSTATUS v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // esi
  const void **Pool2; // rsi
  NTSTATUS v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // r15d
  ULONG pulResult; // [rsp+30h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-18h] BYREF
  __int128 v22; // [rsp+40h] [rbp-10h] BYREF
  ULONG ulMinuend; // [rsp+98h] [rbp+48h] BYREF

  Handle = 0LL;
  v22 = 0LL;
  pulResult = 0;
  ulMinuend = 0;
  if ( !(unsigned __int8)RegRtlIsPredefinedKey() || (v7 = RegRtlOpenPredefinedKey(v6, &Handle), v7 >= 0) )
  {
    v8 = 2LL * *a3;
    if ( v8 > 0xFFFFFFFF )
    {
      v7 = -1073741675;
    }
    else
    {
      v9 = (const void **)&v22;
      v10 = a1;
      v11 = 16;
      if ( (unsigned int)v8 >= 0x10 )
      {
        v9 = a2;
        v11 = 2 * *a3;
      }
      if ( Handle )
        v10 = Handle;
      v12 = ZwQueryObject(v10, ObjectNameInformation, v9, v11, &ulMinuend);
      v7 = v12;
      if ( !v12 )
      {
        v13 = *(unsigned __int16 *)v9;
        v14 = v13 + 2;
        *a3 = (v13 + 2) >> 1;
        if ( (unsigned int)v8 >= v13 + 2 )
        {
          memmove(a2, v9[1], v13);
          *((_WORD *)a2 + ((unsigned __int64)v14 >> 1) - 1) = 0;
          goto LABEL_30;
        }
        goto LABEL_17;
      }
      if ( v12 == -1073741820 )
      {
        v7 = RtlULongSub(ulMinuend, 0x10u, &pulResult);
        if ( v7 < 0 )
          goto LABEL_30;
        if ( (unsigned int)v8 < pulResult )
        {
          *a3 = pulResult >> 1;
LABEL_17:
          v7 = -1073741789;
          goto LABEL_30;
        }
        Pool2 = (const void **)ExAllocatePool2(0x100uLL);
        if ( Pool2 )
        {
          if ( Handle )
            a1 = Handle;
          v16 = ZwQueryObject(a1, ObjectNameInformation, Pool2, ulMinuend, &ulMinuend);
          v7 = v16;
          if ( v16 >= 0 )
          {
            if ( v16 )
            {
              v7 = -1073741595;
            }
            else
            {
              v17 = *(unsigned __int16 *)Pool2;
              v18 = v17 + 2;
              *a3 = (v17 + 2) >> 1;
              if ( (unsigned int)v8 < v17 + 2 )
              {
                v7 = -1073741789;
              }
              else
              {
                memmove(a2, Pool2[1], v17);
                *((_WORD *)a2 + ((unsigned __int64)v18 >> 1) - 1) = 0;
              }
            }
          }
          ExFreePoolWithTag(Pool2, 0);
        }
        else
        {
          v7 = -1073741801;
        }
      }
      else if ( v12 >= 0 )
      {
        v7 = -1073741595;
      }
    }
  }
LABEL_30:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v7;
}
