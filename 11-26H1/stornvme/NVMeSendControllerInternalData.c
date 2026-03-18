/*
 * XREFs of NVMeSendControllerInternalData @ 0x14003090C
 * Callers:
 *     NVMeHwAdapterControl @ 0x140007FB0 (NVMeHwAdapterControl.c)
 * Callees:
 *     __security_check_cookie @ 0x140032530 (__security_check_cookie.c)
 *     memset @ 0x140032A40 (memset.c)
 */

_BOOL8 __fastcall NVMeSendControllerInternalData(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // cl
  __int64 v5; // rcx
  bool v7; // [rsp+30h] [rbp-D0h] BYREF
  bool v8; // [rsp+31h] [rbp-CFh] BYREF
  _WORD v9[631]; // [rsp+32h] [rbp-CEh] BYREF

  memset(&v9[7], 0, 0x4E0uLL);
  v4 = *(_BYTE *)(a1 + 21);
  *(_DWORD *)&v9[83] = 1;
  *(_DWORD *)&v9[107] = 1;
  v7 = (v4 & 0x20) != 0;
  *(_DWORD *)&v9[119] = 1;
  *(_DWORD *)&v9[11] = 10;
  v8 = (v4 & 0x40) != 0;
  *(_QWORD *)&v9[7] = "ControllerNumber";
  LOBYTE(v9[0]) = v4 >> 7;
  *(_QWORD *)&v9[19] = "VendorID";
  *(_QWORD *)&v9[15] = a1;
  *(_QWORD *)&v9[27] = a1 + 4;
  *(_QWORD *)&v9[31] = "DeviceID";
  *(_QWORD *)&v9[39] = a1 + 6;
  *(_QWORD *)&v9[43] = "RevisionID";
  *(_QWORD *)&v9[51] = a1 + 8;
  *(_QWORD *)&v9[55] = "Information";
  *(_QWORD *)&v9[63] = a1 + 12;
  *(_QWORD *)&v9[75] = a1 + 12;
  *(_QWORD *)&v9[79] = "InterruptMasked";
  *(_QWORD *)&v9[87] = &v7;
  *(_QWORD *)&v9[91] = "CriticalWarning";
  *(_QWORD *)&v9[99] = a1 + 22;
  *(_QWORD *)&v9[103] = "EnduranceWarningLogged";
  *(_QWORD *)&v9[111] = &v8;
  *(_QWORD *)&v9[115] = "LowSpareWarningLogged";
  *(_QWORD *)&v9[123] = v9;
  *(_QWORD *)&v9[127] = "States";
  *(_QWORD *)&v9[135] = a1 + 24;
  *(_QWORD *)&v9[139] = "ErrorState";
  *(_QWORD *)&v9[147] = a1 + 28;
  *(_DWORD *)&v9[23] = 9;
  *(_DWORD *)&v9[35] = 9;
  *(_DWORD *)&v9[47] = 8;
  *(_DWORD *)&v9[59] = 10;
  *(_QWORD *)&v9[67] = "InterruptMode";
  *(_DWORD *)&v9[71] = 10;
  *(_DWORD *)&v9[95] = 8;
  *(_DWORD *)&v9[131] = 14;
  *(_DWORD *)&v9[143] = 10;
  *(_QWORD *)&v9[151] = "ControllerMaxTransferSize";
  *(_DWORD *)&v9[155] = 10;
  *(_QWORD *)&v9[159] = a1 + 32;
  *(_QWORD *)&v9[163] = "IoQueueDepth";
  *(_QWORD *)&v9[171] = a1 + 36;
  *(_DWORD *)&v9[167] = 10;
  *(_QWORD *)&v9[183] = a1 + 40;
  *(_QWORD *)&v9[195] = a1 + 42;
  *(_QWORD *)&v9[199] = "InterruptCoalescingTime";
  *(_QWORD *)&v9[207] = a1 + 44;
  *(_QWORD *)&v9[211] = "RegistryValues.Flags";
  *(_QWORD *)&v9[219] = a1 + 56;
  *(_QWORD *)&v9[223] = "AsyncEventMask";
  *(_QWORD *)&v9[231] = a1 + 60;
  *(_QWORD *)&v9[235] = "IoQueuePercentageInPollingMode";
  *(_QWORD *)&v9[243] = a1 + 64;
  *(_QWORD *)&v9[247] = "IoPollingInterval";
  *(_QWORD *)&v9[255] = a1 + 68;
  *(_QWORD *)&v9[259] = "IoPollingSize";
  *(_QWORD *)&v9[267] = a1 + 76;
  *(_QWORD *)&v9[271] = "IdlePowerMode";
  *(_QWORD *)&v9[279] = a1 + 80;
  *(_QWORD *)&v9[283] = "AvailableSpare";
  *(_QWORD *)&v9[291] = a1 + 140;
  *(_QWORD *)&v9[295] = "AvailableSpareThreshold";
  *(_QWORD *)&v9[303] = a1 + 141;
  *(_QWORD *)&v9[307] = "NVMeBAR";
  *(_QWORD *)&v9[315] = a1 + 168;
  *(_QWORD *)&v9[319] = "NVME_VERSION";
  *(_QWORD *)&v9[327] = a1 + 184;
  *(_QWORD *)&v9[331] = "NVME_CONTROLLER_CAPABILITIES";
  *(_QWORD *)&v9[339] = a1 + 192;
  *(_QWORD *)&v9[343] = "NVME_CONTROLLER_CONFIGURATION";
  *(_QWORD *)&v9[175] = "IoSubmissionQueueCount";
  *(_DWORD *)&v9[179] = 9;
  *(_QWORD *)&v9[187] = "IoCompletionQueueCount";
  *(_DWORD *)&v9[191] = 9;
  *(_DWORD *)&v9[203] = 8;
  *(_DWORD *)&v9[215] = 14;
  *(_DWORD *)&v9[227] = 14;
  *(_DWORD *)&v9[239] = 10;
  *(_DWORD *)&v9[251] = 10;
  *(_DWORD *)&v9[263] = 10;
  *(_DWORD *)&v9[275] = 10;
  *(_DWORD *)&v9[287] = 8;
  *(_DWORD *)&v9[299] = 8;
  *(_DWORD *)&v9[311] = 11;
  *(_DWORD *)&v9[323] = 14;
  *(_DWORD *)&v9[335] = 15;
  v5 = *(_QWORD *)(a1 + 176);
  *(_DWORD *)&v9[347] = 14;
  *(_DWORD *)&v9[359] = 14;
  *(_DWORD *)&v9[371] = 14;
  *(_DWORD *)&v9[383] = 14;
  *(_QWORD *)&v9[351] = v5 + 20;
  *(_QWORD *)&v9[355] = "NVME_CONTROLLER_STATUS";
  *(_QWORD *)&v9[363] = v5 + 28;
  *(_QWORD *)&v9[367] = "NVME_CONTROLLER_MEMORY_BUFFER_LOCATION";
  *(_QWORD *)&v9[375] = v5 + 56;
  *(_QWORD *)&v9[379] = "NVME_CONTROLLER_MEMORY_BUFFER_SIZE";
  *(_QWORD *)&v9[387] = v5 + 60;
  *(_QWORD *)&v9[391] = "NVMeDoorBellSize";
  *(_QWORD *)&v9[399] = a1 + 200;
  *(_QWORD *)&v9[403] = "ControllerReadyTimeout";
  *(_QWORD *)&v9[411] = a1 + 204;
  *(_QWORD *)&v9[415] = "MaximumTransferLength";
  *(_QWORD *)&v9[423] = a1 + 208;
  *(_QWORD *)&v9[427] = "LunCount";
  *(_QWORD *)&v9[435] = a1 + 212;
  *(_QWORD *)&v9[439] = "TemperatureThreshold";
  *(_QWORD *)&v9[447] = a1 + 220;
  *(_QWORD *)&v9[451] = "LunStopUnitCount";
  *(_QWORD *)&v9[459] = a1 + 228;
  *(_QWORD *)&v9[463] = "NVME_IDENTIFY_CONTROLLER_DATA";
  v9[469] = 4096;
  *(_QWORD *)&v9[471] = a1 + 1560;
  *(_QWORD *)&v9[475] = "SubmissionEntrySize";
  *(_QWORD *)&v9[483] = a1 + 320;
  *(_QWORD *)&v9[487] = "CompletionEntrySize";
  *(_QWORD *)&v9[495] = a1 + 322;
  *(_QWORD *)&v9[499] = "AdminQueueDepth";
  *(_QWORD *)&v9[507] = a1 + 324;
  *(_QWORD *)&v9[519] = a1 + 326;
  *(_QWORD *)&v9[531] = a1 + 330;
  *(_DWORD *)&v9[395] = 10;
  *(_DWORD *)&v9[407] = 10;
  *(_DWORD *)&v9[419] = 10;
  *(_DWORD *)&v9[431] = 10;
  *(_DWORD *)&v9[443] = 9;
  *(_DWORD *)&v9[455] = 10;
  *(_DWORD *)&v9[467] = 16;
  *(_DWORD *)&v9[479] = 9;
  *(_DWORD *)&v9[491] = 9;
  *(_DWORD *)&v9[503] = 9;
  *(_QWORD *)&v9[511] = "IoQueueDepth";
  *(_DWORD *)&v9[515] = 9;
  *(_QWORD *)&v9[523] = "IoSubmissionQueueCount";
  *(_DWORD *)&v9[527] = 9;
  *(_QWORD *)&v9[535] = "IoCompletionQueueCount";
  *(_DWORD *)&v9[539] = 9;
  *(_DWORD *)&v9[551] = 9;
  *(_QWORD *)&v9[543] = a1 + 332;
  *(_DWORD *)&v9[563] = 9;
  *(_QWORD *)&v9[547] = "IoQueueCountInPollingMode";
  *(_DWORD *)&v9[575] = 9;
  *(_QWORD *)&v9[555] = a1 + 334;
  *(_DWORD *)&v9[587] = 9;
  *(_QWORD *)&v9[559] = "ReservedSubmissionQueueCount";
  *(_DWORD *)&v9[599] = 9;
  *(_QWORD *)&v9[567] = a1 + 952;
  *(_QWORD *)&v9[571] = "ReservedCompletionQueueCount";
  *(_QWORD *)&v9[579] = a1 + 954;
  *(_QWORD *)&v9[583] = "AdminCmdsBeingProcessedCount";
  *(_QWORD *)&v9[591] = a1 + 976;
  *(_QWORD *)&v9[595] = "MaxIoSubmissionQueueCount";
  *(_QWORD *)&v9[603] = a1 + 978;
  *(_QWORD *)&v9[607] = "MaxIoCompletionQueueCount";
  *(_QWORD *)&v9[615] = a1 + 980;
  *(_QWORD *)&v9[619] = "AllocatedReservedQueueCount";
  *(_QWORD *)&v9[627] = a1 + 982;
  *(_DWORD *)&v9[611] = 9;
  *(_DWORD *)&v9[623] = 9;
  return (unsigned int)StorPortExtendedFunction(115LL, a1, 0LL, a2) != 0;
}
