/*
 * XREFs of ?DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ @ 0x140345838
 * Callers:
 *     ?DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AEAAJXZ @ 0x140245FE8 (-DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AEAAJXZ.c)
 * Callees:
 *     ?DdcciReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z @ 0x14022E308 (-DdcciReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z.c)
 *     ?DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z @ 0x14022E44C (-DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z.c)
 *     ?DDCCIFreeMemory@@YAXPEAX@Z @ 0x140246100 (-DDCCIFreeMemory@@YAXPEAX@Z.c)
 *     ?DdcciSendAndReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_J0PEAXK1K@Z @ 0x140345D4C (-DdcciSendAndReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_J0PEAXK1K@Z.c)
 *     ?IsDDCCICapabilitiesStringInitialized@CPhysicalMonitorHandle@@AEBAEXZ @ 0x140345F30 (-IsDDCCICapabilitiesStringInitialized@CPhysicalMonitorHandle@@AEBAEXZ.c)
 *     ?RtlStringCbCopyA@@YAJPEAD_KPEBD@Z @ 0x140345F48 (-RtlStringCbCopyA@@YAJPEAD_KPEBD@Z.c)
 *     Feature_I2CInterface_AtomicTransactions__private_IsEnabledDeviceUsageNoInline @ 0x140345FC8 (Feature_I2CInterface_AtomicTransactions__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall CPhysicalMonitorHandle::DdcciGetCapabilitiesStringFromMonitor(void **this)
{
  unsigned int v1; // ebx
  char *v2; // r12
  unsigned __int64 v3; // r15
  unsigned int v4; // edi
  __int64 v6; // rdx
  int v7; // ebx
  int v8; // eax
  unsigned __int8 v9; // r14
  unsigned int v10; // r13d
  char *Pool2; // rax
  char *v12; // rbx
  unsigned int v13; // edi
  char *v14; // rax
  unsigned int v16; // [rsp+40h] [rbp-40h] BYREF
  int v17; // [rsp+48h] [rbp-38h] BYREF
  __int16 v18; // [rsp+4Ch] [rbp-34h]
  _OWORD Src[2]; // [rsp+50h] [rbp-30h] BYREF
  int v20; // [rsp+70h] [rbp-10h]
  __int16 v21; // [rsp+74h] [rbp-Ch]

  LOWORD(v1) = 0;
  v2 = 0LL;
  LODWORD(v3) = 0;
  v16 = 0;
  v4 = 0;
  while ( 1 )
  {
    v20 = 0;
    v21 = 0;
    v17 = 15958865;
    HIBYTE(v17) = BYTE1(v1);
    memset(Src, 0, sizeof(Src));
    v18 = (unsigned __int8)v1;
    if ( (unsigned int)Feature_I2CInterface_AtomicTransactions__private_IsEnabledDeviceUsageNoInline() )
    {
      v8 = CPhysicalMonitorHandle::DdcciSendAndReceiveDataFromMonitorDevice(
             (CPhysicalMonitorHandle *)this,
             v6,
             -500000LL,
             &v17,
             6u,
             Src,
             0x26u);
    }
    else
    {
      v7 = CPhysicalMonitorHandle::DdcciSendDataToMonitorDevice((CPhysicalMonitorHandle *)this, -500000LL, &v17, 6);
      if ( v7 < 0 )
        break;
      v8 = CPhysicalMonitorHandle::DdcciReceiveDataFromMonitorDevice(
             (CPhysicalMonitorHandle *)this,
             -500000LL,
             Src,
             0x26u);
    }
    v7 = v8;
    if ( v8 < 0 )
      break;
    if ( (BYTE1(Src[0]) & 0x7Fu) < 3 || (v9 = (BYTE1(Src[0]) & 0x7F) - 3, v9 > 0x20u) )
    {
      v7 = -1071774331;
      break;
    }
    if ( (BYTE1(Src[0]) & 0x7F) == 3 )
      goto LABEL_21;
    v10 = v4 + v9;
    if ( v10 < v4 )
    {
LABEL_24:
      v7 = -1073741675;
      break;
    }
    if ( (unsigned int)v3 <= v10 )
    {
      if ( (_DWORD)v3 )
      {
        v3 = 2LL * (unsigned int)v3;
        if ( v3 > 0xFFFFFFFF )
          goto LABEL_24;
      }
      else
      {
        LODWORD(v3) = 2048;
      }
      Pool2 = (char *)ExAllocatePool2(258LL, (unsigned int)v3, 1664248135LL);
      v12 = Pool2;
      if ( !Pool2 )
      {
        v7 = -1073741801;
        break;
      }
      if ( v2 )
        memmove(Pool2, v2, v4);
      DDCCIFreeMemory(v2);
      v2 = v12;
    }
    memmove(&v2[v16], (char *)Src + 5, v9);
    v4 += v9;
    v1 = v9 + v16;
    v16 = v1;
    if ( v1 > 0xFFE0 )
    {
      v7 = 0;
LABEL_21:
      if ( v4 )
      {
        if ( (unsigned int)v3 > v4 )
        {
          v2[v4] = 0;
          v13 = v4 + 1;
          OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)&v16, (struct OPM::CMutex *)(this + 9));
          if ( !CPhysicalMonitorHandle::IsDDCCICapabilitiesStringInitialized((CPhysicalMonitorHandle *)this) )
          {
            v14 = (char *)ExAllocatePool2(258LL, v13, 1664248135LL);
            this[10] = v14;
            if ( v14 )
            {
              v7 = RtlStringCbCopyA(v14, v13, v2);
              if ( v7 >= 0 )
              {
                *((_DWORD *)this + 22) = v13;
              }
              else
              {
                DDCCIFreeMemory(this[10]);
                this[10] = 0LL;
                *((_DWORD *)this + 22) = 0;
              }
            }
            else
            {
              v7 = -1073741801;
            }
          }
          OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)&v16);
        }
        else
        {
          v7 = -1071774328;
        }
      }
      else
      {
        v7 = -1071774329;
      }
      break;
    }
  }
  DDCCIFreeMemory(v2);
  return (unsigned int)v7;
}
