/*
 * XREFs of ?GetMemoryUsageLevel@ModernResourceManagerProxy@@QEAAJPEAW4AppMemoryUsageLevel@System@Windows@@@Z @ 0x18000565C
 * Callers:
 *     ?get_AppMemoryUsageLevel@CMemoryManager@System@Windows@@UEAAJPEAW4AppMemoryUsageLevel@23@@Z @ 0x180011EA0 (-get_AppMemoryUsageLevel@CMemoryManager@System@Windows@@UEAAJPEAW4AppMemoryUsageLevel@23@@Z.c)
 * Callees:
 *     CempLockAcquireExclusive @ 0x180002D0C (CempLockAcquireExclusive.c)
 *     ?RegisterWithServer@ModernResourceManagerProxy@@IEAAJXZ @ 0x180003EF0 (-RegisterWithServer@ModernResourceManagerProxy@@IEAAJXZ.c)
 */

__int64 __fastcall ModernResourceManagerProxy::GetMemoryUsageLevel(
        ModernResourceManagerProxy *this,
        enum Windows::System::AppMemoryUsageLevel *a2)
{
  int v4; // ebx
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // eax
  int v12; // [rsp+50h] [rbp+8h] BYREF
  int v13; // [rsp+60h] [rbp+18h] BYREF
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0;
  v12 = 0;
  v14 = 0LL;
  CempLockAcquireExclusive((__int64)this + 96);
  v4 = ModernResourceManagerProxy::RegisterWithServer(this);
  if ( v4 >= 0 )
  {
    v12 = 8;
    v5 = NtQueryWnfStateData((char *)this + 40, 0LL, 0LL, &v13, &v14, &v12);
    if ( v5 < 0 )
    {
      v4 = v5 | 0x10000000;
      goto LABEL_16;
    }
    v6 = HIDWORD(v14);
    if ( !(unsigned int)QuirkIsEnabled(1114131LL) || v6 < 4 )
    {
      if ( !v6 )
        goto LABEL_14;
      v7 = v6 - 1;
      if ( !v7 )
        goto LABEL_14;
      v8 = v7 - 1;
      if ( !v8 )
      {
        v10 = 1;
        goto LABEL_15;
      }
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 == 1 )
        {
          v10 = 3;
LABEL_15:
          *(_DWORD *)a2 = v10;
          v4 = 0;
          goto LABEL_16;
        }
LABEL_14:
        v10 = 0;
        goto LABEL_15;
      }
    }
    v10 = 2;
    goto LABEL_15;
  }
LABEL_16:
  *((_DWORD *)this + 26) = 0;
  RtlReleaseSRWLockExclusive((char *)this + 96);
  return (unsigned int)v4;
}
